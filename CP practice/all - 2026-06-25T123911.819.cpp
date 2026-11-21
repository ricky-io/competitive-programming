#include <bits/stdc++.h>
using namespace std;

int main() {
	string st;
	cin>>st;
	int qc = 0;
	int ac = 0;
	string demo = "";
	for(int i=0; i<st.length(); i++){
	    if(st[i] == 'Q') demo+= st[i];
	    if(st[i] == 'A' && !demo.empty()) demo+= st[i]; 
	}
	//int n = demo.length();
	while(demo[demo.length()-1] != 'Q'){
	    demo.pop_back();
	}
	int ans = 0;
	for(int i=0; i<demo.length(); i++){
	    if(demo[i] == 'Q'){
	        for(int j=i+1; j<demo.length(); j++){
	            if(demo[j] == 'A'){
	                for(int k=j+1; k<demo.length(); k++){
	                    if(demo[k] == 'Q') ans++;
	                }
	            }
	        }
	    }
	}
	cout<<ans<<endl;
	return 0;

}
