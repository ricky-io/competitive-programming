#include <bits/stdc++.h>
using namespace std;

int main() {
	string st;
	cin>>st;
	int qc = 0;
	int ac = 0;
	for(int i=0; i<st.length(); i++){
	    if(st[i] == 'A' && qc == 0 || i==st.length()-1) continue;
	    if(st[i] == 'A') ac++;
	    if(st[i] == 'Q') qc++;
	}
	cout<<(qc-1)*ac<<endl;
	return 0;

}
