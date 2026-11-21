#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 9;
    int arr[n] = {7,1,2,5,8,4,9,3,6};
    int k=3;
    int maxsum = INT_MIN;
    int maxidx = -1;
    // compute first window
    int prevsum = 0;
    for(int i = 0; i < k; i++) {
        prevsum += arr[i];
    }
    int currsum = 0;
    int i=1;
    int j=k;
    while(j<n){
        currsum = (prevsum - arr[i-1] + arr[j]);
        if(maxsum < currsum){
            maxsum = currsum;
            maxidx = i;
        }
        prevsum = currsum;
        i++;
        j++;
    }
    cout<<maxsum<<endl<<maxidx;
    return 0;
}
