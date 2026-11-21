#include <bits/stdc++.h>
using namespace std;

// number of common divisors codeforces

int gcd_euclid(int a, int b){
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}
int solve(vector<int>& array){
    int n = array.size();
    int gcd = 0;
    for(int i=0; i<n; i++){
        gcd = gcd_euclid(gcd, array[i]);
    }
    int answer = 1;
    for(int i=2; i*i<=gcd; i++){
        int cnt = 0;
        while(gcd%i == 0){
            gcd/=i;
            cnt++;
        }
        answer*=(cnt + 1);
    }
    if(gcd>1) answer*=2;
    return answer;
}
int main() {
    int n;
    cin>>n;
	vector<int> array;
	for(int i=0; i<n; i++){
	    int x;
	    cin>>x;
	    array.push_back(x);
	}
	int ans = solve(array);
	cout<<ans;
 return 0;
}
