#include <iostream>
#include <stack>

using namespace std;

void displayrev(stack<int>& st){
    if(st.size()==0) return; //base case:
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayrev(st);
    st.push(x);
}

void display(stack<int>& st){
    if(st.size()==0) return; //base case:
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}

void pushatbottomRec(stack <int> &st, int val){
    if(st.size()==0) {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushatbottomRec(st, val);
    st.push(x);
}

void reverse(stack <int> &st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushatbottomRec(st,x);
}

int main() {
	// your code goes here
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    //displayrev(st);
    cout<<endl;
    //display(st);
    //cout<<endl;
   // pushatbottomRec(st, 5);
    display(st);
    cout<<endl;
    reverse(st);
    display(st);
    
}
