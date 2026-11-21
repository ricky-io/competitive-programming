#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    int i=0;
    while(i<=t){
        int n,k;
        cin>>n;  //no. of cows
        cin>>k;  // no. of cheats
        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        int brr[n];
        for(int a=0; a<n; a++){
            brr[a] = 0;
        }
        if(k==0){
            for(int l=0; l<n; l++){
                if(arr[k]>arr[k+1]){
                    brr[k] = arr[k];
                }
                else if(arr[k]<arr[k+1]){
                    brr[k] = arr[k];
                }
            }
        }
        else{
            for(int l=0; l<n; l++){
                if(arr[k]>arr[k+1]){}
            }
        }
    }
}

