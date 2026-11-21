#include <bits/stdc++.h>
using namespace std;

// atcoder lcs F:

int main() {
	string str1;
	string str2;
	
	cin >> str1 >> str2;
	
	vector<vector<int>> lcs(str1.length()+1, vector<int> (str2.length()+1, 0));
	
	for(int i=1; i<=str1.length(); i++){
	    for(int j=1; j<=str2.length(); j++){
	        if(str1[i-1] == str2[j-1]){
	            lcs[i][j] = 1 + lcs[i-1][j-1];  
	        } 
	        
	        else lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
	    }
	}
	
	string ans;
    int i=str1.length();
    int j=str2.length();
    while(i>0 && j>0){
        if(str1[i-1]==str2[j-1]){
            ans.push_back(str1[i-1]);
            i--;
            j--;
        }
        else if(lcs[i-1][j]>lcs[i][j-1]){
            i--;
        }
        else{
            j--;
        }
    }
    reverse(ans.begin(),ans.end());
	cout<<ans<<endl;
	
	return 0;

}
