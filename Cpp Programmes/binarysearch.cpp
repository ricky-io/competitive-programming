#include<iostream>
#include<stdbool.h>
#include<climits>
using namespace std;

int main(){
    int arr[10] = {2,4,3,6,10,8,13,9,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 13;
    int lo = 0;
    int hi = n-1;
    
    bool flag = false;

    while(lo<=hi){
    int mid = lo + (hi-lo)/2;
        if(arr[mid]==target) true;
        if(arr[mid] < target) lo = mid-1;
        if(arr[mid] > target) hi = mid+1;
    }
    if(flag == true) cout<<"present";
    else cout<<"absent";

    return 0;
}