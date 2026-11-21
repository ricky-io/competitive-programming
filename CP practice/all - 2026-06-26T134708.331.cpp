#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];
        
        int ans = -1;
        
        for(int i=0; i<n; i++){
            if(nums[i] % 2 == 0) {
                cout<<1<<endl<<i+1<<endl;
                ans = 1;
                break;
            }
        }
        if(ans == -1){
            for(int i=0; i<n-1; i++){    
                for(int j=i+1; j<n; j++){
                    if((nums[i] + nums[j]) % 2 == 0){
                        cout<<2<<endl<<i+1<<" "<<j+1<<endl;
                        ans = 2;
                        break;
                    }
                }
                
            }
        }    
        if(ans == -1) cout<<ans<<endl;
    }
}
