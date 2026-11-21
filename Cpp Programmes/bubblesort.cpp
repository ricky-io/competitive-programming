#include<iostream>
#include<stdbool.h>
using namespace std;
int main(){
    int arr[10] = {2,4,3,6,4,8,3,9,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // bubble sort --> if right element is shorter than swap with left element
    bool flag = true;
    // Passes, n-1
    for(int i=0; i<n; i++){
        if(arr[i]<arr[i+1]) break;
        for(int j=i+1; j<n; j++){
            //swap
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}