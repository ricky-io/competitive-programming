#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, d;
	cin >> m >> d;
	
	vector<int> a(m);
	
	for(int i=0; i<m; i++){
	    char c;
	    cin>>c;
	    if(c == 'G') a[i] = 0;
	    else a[i] = 1;
	}
	
	for(int i=0; i<m; i++){
	    if(a[i] == 0){
	        for(int j = i+1; j<=i+d && j<m; j++){
	            if(a[j] == 1) a[j] = -1;
	        }
	        for(int j=i-1; j>=i-d && j>=0; j--){
	            if(a[j] == 1) a[j] = -1;
	        }
	    }
	}
	
	int best = 0;
	
	for(int i=0; i<m; i++) if(a[i] == 1) best++;

	cout<<best<<endl;
	
	return 0;

}
