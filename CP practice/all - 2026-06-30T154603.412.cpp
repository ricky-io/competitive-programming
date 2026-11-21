#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,x;
	cin>>n>>x;
	
	vector<int> nums(n);
	
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int i = 0;
    long long sum = 0;
    int ans = 0;
    
    for (int j = 0; j < n; j++) {
        sum += nums[j];
    
        while (sum > x) {
            sum -= nums[i];
            i++;
        }
    
        if (sum == x)
            ans++;
    }

    cout <<ans<<endl;
}
