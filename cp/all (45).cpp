#include <bits/stdc++.h>
using namespace std;

bool t_in(string t, string r){
    return r.find(t) != string::npos;
}

int main() {

    int n;
    cin >> n;

    vector<pair<int,string>> a(n);

    for(int i=0;i<n;i++){
        cin >> a[i].second;
        a[i].first = a[i].second.size();
    }

    sort(a.begin(), a.end());

    bool ok = true;

    for(int i=0;i<n-1;i++){
        if(!t_in(a[i].second, a[i+1].second)){
            ok = false;
            break;
        }
    }

    if(!ok){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        for(auto x : a)
            cout << x.second << '\n';
    }
}