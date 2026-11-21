#include <iostream>
#include <stack>
using namespace std;

int main() {
	// your code goes here
    stack<int> st;
    // st.push(10);
    // st.push(25);
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top();
    
    
    //Printing elements of stack also emptying the stack
    
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    
    
    stack<int> temp;
    stack<int> rt;
    
    //How to elements get back in the stack after Printing O(n) namespace
    while(st.size()>0){
       
        // int x = st.top();
        temp.push(st.top());
        cout<<st.top()<<" ";
        st.pop();
        
        ///temp.push(x);
    }
    cout<<endl;
    // putting back to stack from temp
    while(temp.size()>0){
        int x = temp.top();
        cout<<x<<" ";
        temp.pop();
        st.push(x);
    }
    cout<<endl<<st.top()<<endl;
    
    
    // print elements of stack into normal order;
    
    //reversing that stack to real one by copying to 3rd stack than again to first stack
    while(temp.size()>0){
        rt.push(temp.top());
        temp.pop();
    }
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    cout<<st.top();
}
