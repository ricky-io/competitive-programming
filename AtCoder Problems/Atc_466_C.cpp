#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;

	cin>>n;

	int l=1,r=2,ans=0;
	string s;

	while(r<=n){
		cout<<"? "<<l<<" "<<r<<endl;
		cin>>s;
		if(s=="Yes"){
			r++;
		}
		else{
		        ans+=(r-l-1);
			l++;
			if(l==r)r++;
		}
	}
	while(l<n){
	  ans+=(r-l-1);
	  l++;
	 } 
	
	cout<<"! "<<ans<<endl;
	return 0;
}

