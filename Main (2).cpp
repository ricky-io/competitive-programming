#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> a;

    for(int i=0; i<s.size(); i++) a.push_back(s[i]-'0');

    vector<int> b = a;

    sort(a.begin(), a.end());

    int l = -1; int r = -1;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i] && l == -1) l = i;
        else if(a[i] != b[i]) r = i;
    }

    if(l == -1 || r == -1) {
        cout << "No" << '\n';
        return 0;
    }
    else {
        cout << "Yes" << '\n';
        cout << l+1 << ' ' << r+1 << '\n';
        return 0;
    }
}