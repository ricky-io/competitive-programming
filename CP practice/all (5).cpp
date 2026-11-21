#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
//postfix to infix conversion
string solve(string val1, string val2, int ch){
    string s = "";
    s+=val1;
    s.push_back(ch);
    s+=val2;
    return s;
}
int main() {
    //string s = "1+(2+6)*4/(8-3)"; //infix expression
    string s = "79+4*8/3-"; //infix expression
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
            //string ans = val1 + s[i] + val2;
            string ans = solve(val1, val2, s[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
}
