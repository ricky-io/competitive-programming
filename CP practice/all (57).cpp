#include <bits/stdc++.h>
using namespace std;
class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){
        idx = 1;
    }
    int top(){
        if(idx == 1){
            cout<<"Heap is empty \n";
            return -1;
        }
        return arr[1];
    }
    void push(int x){
        if(idx == 50){
        cout << "Heap overflow\n";
        return;
        }
        arr[idx] = x;
        int i = idx;
        idx++;
        // swapping i with parent till i=1
        while(i > 1){
            int parent = (i)/2;
            if(arr[i]<arr[parent])
                swap(arr[i], arr[parent]);
            else break;
            i = parent; // i = i/2;
        }
    }
    void pop(){
        if(idx == 1){
        cout << "Heap is empty\n";
        return;
        }
        idx--;
        arr[1] = arr[idx];
        int i = 1;
        while(true){
            int left = 2*i, right = 2*i+1;
            if(right > idx-1){
                if(arr[i] > arr[left]){
                    swap(arr[i], arr[left]);
                    i = left;
                }
                continue;  // instead of break
            }
            if(arr[left]<arr[right]){
                if(arr[i]>arr[left]){
                   swap(arr[i], arr[left]);
                    i=left; 
                }
                else break;
            }
            else{
                if(arr[i]>arr[right]){
                   swap(arr[i], arr[right]);
                    i= right;
                }
                else break;
            }
        }
    }
    int size(){
        return idx-1;
    }
    void display(){
        for(int i=1; i<idx; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
	// your code goes here
	MinHeap pq;
	pq.push(10);
	pq.push(7);
	cout<<pq.size()<<endl;
	pq.push(15);
	pq.push(14);
	cout<<pq.top()<<endl;
	pq.push(9);
	cout<<pq.top()<<endl;
	pq.display();

}
