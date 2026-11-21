#!/bin/bash

for file in *.cpp
do
    echo "Checking: $file"

    if g++ "$file" -std=c++17 -o /tmp/cpp_test 2> "compile_errors/$file.txt"
    then
        echo "  ✓ OK"
        rm -f "compile_errors/$file.txt"
    else
        echo "  ✗ ERROR"
        mv "$file" buggy/
    fi
done

rm -f /tmp/cpp_test

echo
echo "=============================="
echo "Finished!"
echo "Working files : $(ls *.cpp 2>/dev/null | wc -l)"
echo "Buggy files   : $(ls buggy/*.cpp 2>/dev/null | wc -l)"
echo "=============================="
