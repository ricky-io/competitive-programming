#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++){
	    cin>>a[i];
	}
	
	std::reverse(a.begin(), a.end());
	
	unordered_set<int> st;
	
	for(int i=0; i<n; i++){
	    st.insert(a[i]);
	}
	for(auto x : st){
	    cout<<x<<" ";
	}
	cout<<endl;
	return 0;

}
