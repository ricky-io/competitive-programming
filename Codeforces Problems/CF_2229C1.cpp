#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> nums(n);

	    vector<int> answers;
	    
	    for(int i=0; i<n; i++){
	        cin>>nums[i];
	    }
	    
	    bool multi = false;
	    
	    for(int i = n-1; i >= 0; i--){
	        int x = nums[i];
	        if(multi == true) x = -x;
    	    if(x > 0){
    	        answers.push_back(i+1);
    	        multi = !multi;
    	    }
	    }
	    cout<<answers.size()<<endl;
	    for(int i=0; i<answers.size(); i++){
	        cout<<answers[i]<<" ";
	    }
	    cout<<endl;
	}
return 0;
}
