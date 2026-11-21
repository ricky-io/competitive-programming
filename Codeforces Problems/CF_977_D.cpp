#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    map<long long,int> exist;

    for(int i=0;i<n;i++){
        cin>>a[i];
        exist[a[i]]=1;
    }

    for(int start=0;start<n;start++){

        vector<long long> ans;
        map<long long,int> vis;

        long long cur=a[start];

        while(true){

            ans.push_back(cur);
            vis[cur]=1;

            if(cur%3==0 && exist.count(cur/3) && !vis[cur/3]){
                cur/=3;
            }
            else if(exist.count(cur*2) && !vis[cur*2]){
                cur*=2;
            }
            else{
                break;
            }
        }

        if(ans.size()==n){

            for(long long x:ans)
                cout<<x<<" ";

            return 0;
        }
    }
}