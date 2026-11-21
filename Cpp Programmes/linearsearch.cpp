#include<iostream>
#include<stdbool.h>
#include<climits>
using namespace std;

int main(){
    int arr[10] = {2,4,3,6,10,8,13,9,5,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 13;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            flag = true;
        }
    }
    if(flag == true) cout<<"present";
    else cout<<"absent";
    return 0;
}
