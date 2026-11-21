#include<iostream>
#include<stdbool.h>
#include<climits>
using namespace std;

int main(){
    int arr[10] = {2,4,3,6,10,8,13,9,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j=i; j<n; j++){
            if(min>arr[j]){
                min = arr[j];
                minidx = j;
            }
            // swaping
            int temp = arr[minidx];
            arr[minidx] = arr[i];
            arr[i] = temp;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//Selection sort is very Ubstable..