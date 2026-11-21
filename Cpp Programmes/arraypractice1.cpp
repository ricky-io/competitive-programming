#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max = INT_MIN;
    int Smax = INT_MIN;
    for(int i=0; i<n; i++){
        if(max<=arr[i]){
            max = arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(Smax<arr[i] && max!=arr[i]){
            Smax = arr[i];
        }
    }
    cout<<"Max element = "<<max<<endl;
    cout<<"Second max element = "<<Smax;
}