#include<iostream>
#include<stdbool.h>
using namespace std;

int main(){
    int arr[10] = {8,9,7,4,5,1,0,6,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // bubble sort --> if right element is shorter than swap with left element
    for(int i=0; i<n; i++){
        bool flag = false;
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                flag = true;
            }
        }
        if(flag == false) break;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}