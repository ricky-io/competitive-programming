#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int a, b, m;
	    cin >> a >> b >> m;

        if(b-a < m) {
            long long x = (b*(b+1)) / 2;
            long long y = (a*(a+1)) / 2;

            cout << x - y << endl;
        }

        else{
            long long cycle = (m*(m-1)) / 2;
            long long no = (b-a) / m;

            long long left = b%a-1;

            long long start = (a+1)%m;
            long long end = b%m;

            long long sum = 0;

            for(int i = min(start, end); i<=max(start, end); i++) sum += i;

            cout << cycle + sum << endl;
        }
	}
 
}