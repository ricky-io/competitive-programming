"""
File Manager - Streamlit UI
A simple CRUD (Create, Read, Update, Delete) app for managing text files,
built as a UI wrapper around basic file-handling operations in Python.

Run with:
    streamlit run file_manager_app.py
"""

import streamlit as st
from pathlib import Path

# ---------- Page Config ----------
st.set_page_config(
    page_title="File Manager",
    page_icon="📁",
    layout="centered",
)

# A dedicated folder so the app doesn't touch random files on your system
WORKDIR = Path("file_manager_files")
WORKDIR.mkdir(exist_ok=True)

# ---------- Helpers ----------
def list_files():
    return sorted([f.name for f in WORKDIR.iterdir() if f.is_file()])


def safe_path(name: str) -> Path:
    """Keep all files inside WORKDIR, regardless of what the user types."""
    return WORKDIR / Path(name).name


# ---------- Header ----------
st.title("📁 File Manager")
st.caption("A tiny CRUD app for text files — Create, Read, Update, Delete — built with Python + Streamlit.")

st.divider()

# ---------- Sidebar: existing files ----------
with st.sidebar:
    st.header("📂 Existing files")
    files = list_files()
    if files:
        for f in files:
            st.write(f"• {f}")
    else:
        st.write("No files yet. Create one to get started!")
    st.divider()
    st.caption(f"Files are stored in `{WORKDIR}/`")

# ---------- Tabs for each operation ----------
tab_create, tab_read, tab_update, tab_delete = st.tabs(
    ["➕ Create", "📖 Read", "✏️ Update", "🗑️ Delete"]
)

# ----- CREATE -----
with tab_create:
    st.subheader("Create a new file")
    file_name = st.text_input("File name", placeholder="example.txt", key="create_name")
    content = st.text_area("File content", placeholder="Write something...", key="create_content")

    if st.button("Create File", type="primary", key="create_btn"):
        if not file_name:
            st.warning("Please enter a file name.")
        else:
            path = safe_path(file_name)
            if path.exists():
                st.error(f"⚠️ A file named '{path.name}' already exists.")
            else:
                try:
                    with open(path, "w") as fs:
                        fs.write(content)
                    st.success(f"✅ File '{path.name}' created successfully!")
                except Exception as err:
                    st.error(f"An error occurred: {err}")

# ----- READ -----
with tab_read:
    st.subheader("Read a file")
    files = list_files()
    if not files:
        st.info("No files available. Create one first.")
    else:
        selected = st.selectbox("Choose a file", files, key="read_select")
        if st.button("Read File", key="read_btn"):
            path = safe_path(selected)
            try:
                with open(path, "r") as fs:
                    file_content = fs.read()
                st.success(f"Showing contents of '{selected}':")
                st.code(file_content or "(empty file)", language=None)
            except Exception as err:
                st.error(f"An error occurred: {err}")

# ----- UPDATE -----
with tab_update:
    st.subheader("Update a file")
    files = list_files()
    if not files:
        st.info("No files available. Create one first.")
    else:
        selected = st.selectbox("Choose a file", files, key="update_select")
        operation = st.radio(
            "What would you like to do?",
            ["Rename", "Append content", "Overwrite content"],
            key="update_op",
        )

        path = safe_path(selected)

        if operation == "Rename":
            new_name = st.text_input("New file name", key="rename_input")
            if st.button("Rename File", type="primary", key="rename_btn"):
                if not new_name:
                    st.warning("Please enter a new file name.")
                else:
                    new_path = safe_path(new_name)
                    if new_path.exists():
                        st.error(f"⚠️ A file named '{new_path.name}' already exists.")
                    else:
                        try:
                            path.rename(new_path)
                            st.success(f"✅ Renamed '{selected}' to '{new_path.name}'.")
                        except Exception as err:
                            st.error(f"An error occurred: {err}")

        elif operation == "Append content":
            append_text = st.text_area("Content to append", key="append_input")
            if st.button("Append", type="primary", key="append_btn"):
                try:
                    with open(path, "a") as fs:
                        fs.write("\n" + append_text)
                    st.success(f"✅ Content appended to '{selected}'.")
                except Exception as err:
                    st.error(f"An error occurred: {err}")

        elif operation == "Overwrite content":
            new_content = st.text_area("New content (replaces everything)", key="overwrite_input")
            if st.button("Overwrite", type="primary", key="overwrite_btn"):
                try:
                    with open(path, "w") as fs:
                        fs.write(new_content)
                    st.success(f"✅ '{selected}' overwritten successfully.")
                except Exception as err:
                    st.error(f"An error occurred: {err}")

# ----- DELETE -----
with tab_delete:
    st.subheader("Delete a file")
    files = list_files()
    if not files:
        st.info("No files available.")
    else:
        selected = st.selectbox("Choose a file to delete", files, key="delete_select")
        confirm = st.checkbox(f"I'm sure I want to permanently delete '{selected}'", key="delete_confirm")
        if st.button("Delete File", type="primary", key="delete_btn", disabled=not confirm):
            path = safe_path(selected)
            try:
                path.unlink()
                st.success(f"🗑️ '{selected}' deleted successfully.")
                st.rerun()
            except Exception as err:
                st.error(f"An error occurred: {err}")

st.divider()
st.caption("Built with Python's `pathlib` + Streamlit · A simple CRUD demo.")
