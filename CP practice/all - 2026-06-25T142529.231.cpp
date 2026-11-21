#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin>>n;
	
	int draws = n/100;
	if(n != 0) n = n%100;
	draws += n/20;
	if(n != 0)n = n%20;
	draws += n/10;
	if(n != 0)n = n%10;
	draws += n/5;
	if(n != 0)n = n%5;
	draws += n/1;
	
	cout<<draws<<endl;
	return 0;
}
