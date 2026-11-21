#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;
	
	long long x, a, b, c;
	cin >> x >> a >> b >> c;
	
	vector<long long> nums(n);
	nums[0] = x;
	
	for(int i=1; i<n; i++){
	    nums[i] = ((a * nums[i-1]) + b) % c;
	}
	
	stack<long long> st;
	
	long long sum = 0;
	for(int i=0; i<k; i++){
	    sum += nums[i];
	}
	
	st.push(sum);
	
	for(int j=0, i=k; i<n; i++, j++){
	    long long acc = st.top() + nums[i] - nums[j];
	    
	    st.push(acc);
	}
	
	
	long long y = st.top();
	st.pop();
	if(st.empty()){
	    cout << y << " \n";
	    return 0;
	}
	long long z = st.top();
	st.pop();
	
	long long result = y^z;
	
	while(!st.empty()){
	    result = result ^ st.top();
	    st.pop();
	}
	
	cout << result << "\n";
	
	return 0;

}
