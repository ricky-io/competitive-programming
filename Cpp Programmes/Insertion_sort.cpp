#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int arr[] = {9, 5, 7, 1, 8, 10, 3, 14, 6, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	//insertion sorting algortithm
	for(int i=1; i<n; i++){
	    int j = i;
	    while(j>=1 && arr[j]<arr[j-1]){
	        int temp = arr[j];
	        arr[j] = arr[j-1];
	        arr[j-1] = temp;
	        j--;
	    }
	}
	// display outpu
	for(int i=0; i<n; i++){
	    cout<<arr[i]<<" ";
	}
}
