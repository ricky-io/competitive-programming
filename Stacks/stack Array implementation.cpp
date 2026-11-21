// Array Implentation
#include <bits/stdc++.h>
using namespace std;

class Stack{ // user defined data structure
public:
    int arr[5];
    int idx;
    Stack(){  // constructor
        idx = -1;
    }
    void push(int val){
        if(idx == sizeof(arr)/sizeof(arr[0])-1){
            cout<<"Stack is full...";
            return;
        }
        idx++;
        arr[idx] = val;
    }
    
    void pop(){
        if(idx == -1){
            cout<<"Stack is empty !"<<endl;
            return;
        }
        idx--;
    }
    
    int top(){
        if(idx == -1){
            cout<<"Stack is empty !"<<endl;
            return -1;
        }
        return arr[idx];
    }
    
    int size(){
        return idx+1;
    }
};

int main() {
	// your code goes here
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(65);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
}
