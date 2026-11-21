#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin>>q;
	while(q--){
	    
	    int rating;
	    cin>>rating;
	    
    // For Division 1: 1900≤rating
    // For Division 2: 1600≤rating≤1899
    // For Division 3: 1400≤rating≤1599
    // For Division 4: rating≤1399
        if(rating <= 1399) cout<<"Division 4"<<endl;
        else if(rating <= 1599 && rating >= 1400) cout<<"Division 3"<<endl;
        else if(rating <= 1899 && rating >= 1600) cout<<"Division 2"<<endl;
        else cout<<"Division 1"<<endl;
    
	}
    return 0;
}
