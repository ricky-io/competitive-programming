#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

long long f(long long n, long long &sum){
    if(n == 1) return 1;
    sum += f(n-1, sum);
    return (1 + sum)%MOD;
}


int main() {
	long long n;
	cin>>n;
	long long sum = 0;
	cout<<f(n, sum)<<endl;
	

}
