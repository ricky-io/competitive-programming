#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 9;
    int arr[n] = {7,1,2,5,8,4,9,3,6};
    int maxsum = INT_MIN;
    int maxidx = -1;
    int prevsum = 10;
    int currsum = 0;
    int i=0;
    int j=k;
    while(j<n){
        currsum = prevsum + arr[j] - arr[i-1];
        if(maxsum < currsum){
            maxsum = currsum;
            maxidx = j;
        }
        i++;
        j++;
    }
}