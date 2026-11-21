#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        vector<long long> a(n);
        for(auto &x:a) scanf("%lld",&x);

        vector<int> cnt(n+2,0);
        vector<vector<int>> pos(n+2);
        for(int i=0;i<n;i++){
            if(a[i] <= n){ cnt[a[i]]++; pos[a[i]].push_back(i); }
        }

        if(cnt[0]==1){
            printf("NO\n");
            continue;
        }

        int A3=0; while(A3<=n && cnt[A3]>=3) A3++;
        int A2=0; while(A2<=n && cnt[A2]>=2) A2++;

        string res(n,'A');

        if(A2 > A3){
            for(int v=0; v<A3; v++){
                res[pos[v][0]]='A';
                res[pos[v][1]]='B';
                res[pos[v][2]]='C';
            }
            for(int v=A3; v<A2; v++){
                res[pos[v][0]]='B';
                res[pos[v][1]]='C';
            }
        } else {
            int m = A3; // == A2
            for(int v=0; v<m; v++){
                res[pos[v][0]]='A';
                res[pos[v][1]]='B';
                res[pos[v][2]]='C';
            }
            if(cnt[m]==1){
                res[pos[m][0]]='C';
            }
        }

        printf("YES\n");
        printf("%s\n", res.c_str());
    }
}