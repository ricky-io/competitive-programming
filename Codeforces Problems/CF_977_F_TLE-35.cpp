#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    unordered_map<long long,int> dp;

    int best = 0;
    long long endValue = 0;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];

        dp[a[i]] = dp[a[i]-1] + 1;

        if(dp[a[i]] > best)
        {
            best = dp[a[i]];
            endValue = a[i];
        }
    }

    cout << best << '\n';

    long long need = endValue - best + 1;

    for(int i=0;i<n;i++)
    {
        if(a[i]==need)
        {
            cout << i+1 << " ";
            need++;
        }
    }
}