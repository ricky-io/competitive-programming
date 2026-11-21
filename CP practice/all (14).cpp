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

void removeitems(queue <int>& q){
    int n = q.size();
    for(int i=0; i<n; i++){
        if(i%2==0) q.pop();
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}

int main() {
	// your code goes here
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(45);
    q.push(60);
    display(q);
    removeitems(q);
    cout<<endl;
    display(q);

}

