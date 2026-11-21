#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	
	priority_queue<pair<char, int>, vector<pair<char, int>>, greater<pair<char, int>>> min_heap;
	
	for(int i=0; i<n; i++) {
	    char x ;
	    cin>>x;
	    min_heap.push({x, i});
	}
	
	while(k--){
	    min_heap.pop();
	}
	
	vector<pair<char, int>> a;
	
	
	while(!min_heap.empty()){
	    a.push_back(min_heap.top());
	    min_heap.pop();
	}
	std::sort(a.begin(), a.end(), [](const auto& c, const auto& b) {
        return c.second < b.second;
    });
	
	for(int i=0; i<a.size(); i++){
	    cout<<a[i].first; 
	}
	
	cout<<endl;
	
	return 0;
}
