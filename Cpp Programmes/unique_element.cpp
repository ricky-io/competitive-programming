#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,5,1,4,3,2,3,5,1};
    int n = 9;
    int res = 0;
    for(int i=0; i<n; i++){
        res = res ^ arr[i];
    }
    cout<<res<<"\n";
    return 0;
}