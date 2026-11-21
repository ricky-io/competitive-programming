#include <bits/stdc++.h>
using namespace std;

// Binary Search :

int main() {
	int arr[10] = {1 , 4, 6, 8, 9, 12, 23, 34, 45, 60};
	int target = 40;
	int lo = 0;
	int hi = 9;
	while(lo<=hi){
	    int mid = lo + (hi - lo)/2;
	    if(arr[mid] == target) cout<<mid+1<<endl;
	    if(arr[mid] > target) hi = mid-1;
	    else lo = mid+1;
	}
    return 0;
}
