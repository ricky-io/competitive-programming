#include <iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

// Infix to prefix conversion

int priority(char ch){
    if(ch=='+' || ch == '-') return 1;
    else return 2; // * , / 
}

string solve(string val1, string val2, char ch){
    // we have store prefix in the ans
    // prefix = op v1 val2
    string s = "";
    s += val1;
    s += val2;
    s.push_back(ch);
    return s;
}

int main() {
	// your code goes here
    //string s = "1+(2+6)*4/(8-3)"; //infix expression
    string s = "(7+9)*4/8-3"; //infix expression
    // we need two stacks here, 1 for val and another for ops
    stack<string> val;
    stack<char> op;
    for(int i=0; i<s.length(); i++){
        //check if s[i] is digit (0-9)
        if(s[i]>= 48 && s[i]<=57){ // digit
            val.push(to_string(s[i]-48));
        }
        
        else { // s[i] it is -> +, -, *, /
            // C-1: op is empty // C-2: priority of next op is more than already on stack;
            if(op.size()==0) op.push(s[i]);
            
            else if(s[i] == '(') op.push(s[i]);
            
            else if(op.top() == '(') op.push(s[i]);
            
            else if(s[i] == ')'){
                while(op.top() != '('){
                    // solve
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop(); // opening bracket is also get pop/..
            }
            
            else if(priority(s[i])>priority(op.top())) op.push(s[i]);
            
            else{ // C-3: priority(s[i]) <= priority(op.top())
                while(op.size()>0 && priority(s[i]) <= priority(op.top())){
                    // then solve
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // the op stack can have some values
    // so make it empty
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    //cout<<1+(2+6)*4/(8-3)<<endl;
}
