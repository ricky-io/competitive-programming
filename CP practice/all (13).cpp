#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void display(queue<int>& q){
    int n = q.size();
    for(int i=0; i<n; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverse(queue <int> &q){
   // int n = q.size();
    stack<int> st;
    while(q.size()>0){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x = st.top();
        st.pop();
        q.push(x);
    }
}

int main() {
	// your code goes here
    queue<int> q;
    //push // pop // front->top // size, empty // back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(45);
    q.push(60);
    display(q);
    cout<<endl;
    reverse(q);
    display(q);
    // cout<<endl<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // q.pop();
    // cout<<q.back()<<endl;
    // cout<<q.front()<<endl;
    // cout<<q.size();
    

}
