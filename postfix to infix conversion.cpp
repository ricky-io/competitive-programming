#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
//postfix to infix conversion
int solve(int val1, int val2, int ch){
    if(ch == '+') return val1 + val2;
    else if(ch == '-') return val1 - val2;
    else if(ch == '*') return val1 * val2;
    else return val1/ val2;
}
int main() {
    //string s = "1+(2+6)*4/(8-3)"; //infix expression
    string s = "26+"; //infix expression
    // we need one stacks here, 1 for val
    stack<string> val;
    for(int i=0; i<s.length(); i++){
        //check if s[i] is digit (0-9)
        if(s[i]>= 48 && s[i]<=57){ // digit
            val.push(to_string(s[i]-48));
        }
        else { // if operators, then actual evaluations
            string val2 = val.top();
            val.pop();
            string val1 = val.top();
            val.pop();
            string ans = val1 + s[i] + val2;
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}
