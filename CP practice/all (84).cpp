#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    vector<int> ans;
    while(t--){
        ans.clear();
        for(int i=0; i<7; i++){
            int x;
            cin>>x;
            if(x >= -67 && x <= 67) ans.push_back(x);
            else continue;
        }
        sort(ans.begin(), ans.end());
        int sum = 0;
        for(int i=0; i<6; i++){
            ans[i]*= -1;
            sum+=ans[i];
        }
        sum = sum + ans[6];
        cout<<sum<<"\n";
    }
}
