#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	
	while(t--){
	    long long p1, p2, q1, q2, r1, r2, s1, s2;
	    cin>>p1>>p2>>q1>>q2>>r1>>r2>>s1>>s2;
	    
	    long long x1 = ((q1 * q1) - (p1 * p1))/(2*(q1 - p1));
	    long long y1 = ((q2 * q2) - (p2 * p2))/(2*(q2 - p2));
	    
	    long long x2 = ((s1 * s1) - (r1 * r1))/(2*(s1 - r1));
	    long long y2 = ((s2 * s2) - (r2 * r2))/(2*(s2 - r2));
	    
	    if(x1 == x2 && y1 == y2) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	}
	return 0LL;

}
