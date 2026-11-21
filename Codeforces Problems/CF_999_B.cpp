#include <bits/stdc++.h>
using namespace std;

void solve(string &str, int idx){
    int n = str.length();
    for(int i=0; i<=idx/2; i++){
        swap(str[i], str[idx-i]);
    }
}

int main() {
	int n;
	cin>>n;
	
	string str;
	
	cin>>str;
	
	vector<int> divs;
	
	for(int i=2; i <= n; i++){
	    if(n%i == 0) solve(str, i-1);
	}
	
	cout<<str<<endl;
	
	return 0;

}
