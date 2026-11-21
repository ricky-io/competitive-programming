#include <bits/stdc++.h>
using namespace std;


int main() {
	// Find the kth smallest number in an array:
	int arr[] = {10, -1, 2,4, 6,23, 15, 16, -7, 25, 67};
	int k = 3;
	int n = sizeof(arr)/4;
	priority_queue<int> pq; // max_heap
	for(int i=0; i<n; i++){
	    pq.push(arr[i]);
	    if(pq.size() > k) pq.pop();
	}
	cout<<pq.top();
	
	

}
