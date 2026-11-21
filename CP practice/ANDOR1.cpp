#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string a, b;
	    cin>>n>>a>>b;
	    
	    string pa;
	    for(char c : a){
	        if( pa.empty() || pa.back()!= c) pa.push_back(c);
	    }
	    
	    string pb;
	    for(char c : b){
	        if( pb.empty() || pb.back()!= c) pb.push_back(c);
	    }
	    
	    int i=0; int j=0;
	    while(i<pa.size() && j<pb.size()){
	        if(pa[i] == pb[j]) j++;
	        i++;
	    }
	    
	    cout<<(j == pb.size() ? "Yes" : "No")<<endl;
	}
	return 0;

}
