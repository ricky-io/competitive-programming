#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        nums[i] = i+1;
    }
    
    for(int i = 0; i<n; i++){
        if(s[i] == 'o') reverse(nums.begin(), nums.begin() + i + 1);
    }
    
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }

}
