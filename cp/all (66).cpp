#include <bits/stdc++.h>
using namespace std;

long long factorial(int num){
    long long fact = 1;
    for(int i=1; i<=num; i++){
        fact *= i;
    }
    return fact;
}

long long ranks(vector<int> &a){
    int n = a.size();
    long long r = 1;
    
    for(int i=0; i<n; i++){
        int count = 0;
        
        for(int j = i+1; j<n; j++){
            if(a[j] < a[i]) count++;
        }
        int rem = n - 1 - i;
        r += count * factorial(rem);
    }
    return r;
}

int main() {
	int n;
	cin>>n;
	
	vector<int> p(n);
	vector<int> q(n);
	
	for(int i=0; i<n; i++) cin>>p[i];
	for(int i=0; i<n; i++) cin>>q[i];
	
	long long r1 = ranks(p);
	long long r2 = ranks(q);
	
	long long ans = r2 - r1 - 1;
	
	if(ans < 0) ans = 0;
	
	cout<<ans<<endl;
	
	return 0;

}
