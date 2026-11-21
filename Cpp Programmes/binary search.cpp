#include <iostream>
using namespace std;

int main() {
    int nums[6] = {-1,0,3,5,9,12};
    
    int n = sizeof(nums)/sizeof(nums[0]);
    int target = 2;
    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(nums[mid] == target){ 
            cout<<mid;
            flag = true; 
             break;
        }
        else if(nums[mid] < target) lo = mid+1;
        else if(nums[mid] > target) hi = mid-1;
    }
    if(flag != true) cout<<-1;
    return 0;
}
