#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for(int i=0;i<n;i++) scanf("%d", &a[i]);
        
        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(), [&](int x, int y){ return a[x] < a[y]; });
        
        string res(n, 'A');
        
        int i = 0;
        int v = 0;
        while(i < n && a[idx[i]] == v){
            // gather all occurrences of value v
            int j = i;
            vector<int> occ;
            while(j < n && a[idx[j]] == v){
                occ.push_back(idx[j]);
                j++;
            }
            char labels[3] = {'A','B','C'};
            int lim = min((int)occ.size(), 3);
            for(int k=0;k<lim;k++) res[occ[k]] = labels[k];
            
            i = j;
            v++;
        }
        
        printf("YES\n");
        printf("%s\n", res.c_str());
    }
    return 0;
}