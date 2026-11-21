#include <bits/stdc++.h>
using namespace std;

next greater element 

int main() {
	int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> ans(n);
    stack<int> st;
    ans[n-1] = -1;
    st.push(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        while(!st.empty() && arr[i] >= st.top()) st.pop();
        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
	return 0;
}
