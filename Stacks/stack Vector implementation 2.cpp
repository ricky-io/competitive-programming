// Vector Implementation
#include <iostream>
#include <vector>
using namespace std;

class Stack{
public:
    vector<int> v; //No overflow condition
    Stack(){
    }
    
    void push(int val){
        v.push_back(val);
    }
    
    void pop(){
        if(v.size()==0){
            cout<<"Stack is empty! "<<endl;
            return;
        }
        v.pop_back();
    }
    
    int top(){
        if(v.size()==0){
            cout<<"Stack is Empty!"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    
    int size(){
        return v.size();
    }

    void display(){
        for(int i=0; i<idx; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};
int main() {
	// your code goes here
	Stack st;
	cout<<st.top()<<endl;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.push(60);
	cout<<st.size()<<endl;
	cout<<st.top()<<endl;
    st.display();

}
