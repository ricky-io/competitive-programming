#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, k;
	cin>>n>>k;
	
	unordered_set<int> st;
	vector<int> a;
	
	for(int i=0; i<n; i++){
	    int x;
	    cin>>x;
	    if(!st.count(x)){
	        st.insert(x);
	        a.push_back(i+1);
	    }
	}
	
	if(st.size() < k) cout<<"NO"<<endl;
	else{
	    cout << "Yes"<<endl;
	    for(int i=0; i<k; i++) cout<<a[i]<<" ";
	}
	cout<<endl;

}
