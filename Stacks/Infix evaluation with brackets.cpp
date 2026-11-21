#include <iostream>
#include<stack>
using namespace std;


int priority(char ch){
    if(ch=='+' || ch == '-') return 1;
    else return 2; // * , / 
}

int solve(int val1, int val2, int ch){
    if(ch=='+') return val1 + val2;
    else if(ch=='-') return val1 - val2;
    else if(ch=='*') return val1 * val2;
    else return val1 / val2;
}

int main() {
	// your code goes here
    string s = "1+(2+6)*4/(8-3)"; //infix expression
    // we need two stacks here, 1 for val and another for ops
    stack<int> val;
    stack<char> op;
    for(int i=0; i<s.length(); i++){
        //check if s[i] is digit (0-9)
        if(s[i]>= 48 && s[i]<=57){ // digit
            val.push(s[i]-48);
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
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
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
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
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
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<1+(2+6)*4/(8-3)<<endl;
}
