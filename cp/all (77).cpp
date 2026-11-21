#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll MOD = 998244353;

ll power(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1) ans = ans*a%MOD;
        a = a*a%MOD;
        b >>= 1;
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    vector<ll>a(n+1),pref(n+1),H(n+1);

    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=n;i++)
        pref[i]=(pref[i-1]+a[i])%MOD;

    for(int i=1;i<=n;i++)
        H[i]=(H[i-1]+power(i,MOD-2))%MOD;

    ll ans=0;

    for(int i=0;i<=n;i++){
        ll coef=(H[i]-H[n-i]+MOD)%MOD;
        ans=(ans+pref[i]*coef)%MOD;
    }

    cout<<ans;
}