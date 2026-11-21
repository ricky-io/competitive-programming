#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,x;
	cin>>n>>x;
	
	vector<pair<long long,int>> nums;
	
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        nums.push_back({val, i + 1});
    }
    
	sort(nums.begin(), nums.end());
	
    int i = 0, j = n - 1;

    while (i < j) {
        long long sum = nums[i].first + nums[j].first;

        if (sum == x) {
            cout << nums[j].second << " "
                 << nums[i].second << '\n';
            return 0;
        }
        else if (sum < x)
            i++;
        else
            j--;
    }

    cout << "IMPOSSIBLE\n";
}
