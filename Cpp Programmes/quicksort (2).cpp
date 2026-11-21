#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[], int si, int ei){
    int pivotElement = arr[si];
    int count = 0;
    for(int i=si+1; i<=ei; i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[pivotIdx], arr[si]);
    int i=si;
    int j=ei;
    while(i<pivotIdx && j<pivotIdx){
        if(arr[i]<pivotElement) i++;
        if(arr[j]>=pivotElement) j++;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}

void quicksort(int arr[], int si, int ei){
    if(si>=ei) return;
    int pi = partition(arr, si, ei);
    quicksort(arr, si, pi-1);
    quicksort(arr, pi+1, ei);
}




int main(){
    int arr[7] = {5, 1, 3, 0, 4, 9, 6};
    int si = 0;
    int ei = 6;
    quicksort(arr , 0 , 6);
    
    for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}