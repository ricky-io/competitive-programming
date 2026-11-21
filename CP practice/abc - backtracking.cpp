#include <bits/stdc++.h>
using namespace std;

// Bactracking first problems

// Q: you are given an string of small alphabets and you have to give the all possible permutations

void permutations(string input, string output){
    int n = input.size();
    if(input.size() == 0) {
        cout<<output<<endl;
        return;
    }
    
    for(int i=0; i<n; i++){
        char ch = input[i];
        string left = input.substr(0, i);
        string right = input.substr(i+1, n);
        string ros = left + right;
        permutations(ros, output+input[i]);
    }
}

int main() {
	// your code goes here
	
	permutations("abc", "");

}
