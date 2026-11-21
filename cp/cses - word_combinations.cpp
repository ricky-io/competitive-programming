#include <bits/stdc++.h>
using namespace std;

// String Algorithims : Word Combinations : DP :: TRIE :

using ll = long long;

const int mod = 1e9 + 7;

// building trie funciton just for word dictinary occurences optimaization::

struct Node {
    int child[26];
    bool terminal;
    
    Node(){
        memset(child, -1, sizeof(child));
        terminal = false;
    }
};

int main() {
    
    string s;
    cin >> s;
    
    int k;
    cin >> k;
    
    vector<Node> trie(1);
    
    // Build trie
    
    for(int i=0; i<k; i++){
        string word;
        cin >> word;
        
        int node = 0;
        
        for(char c : word){
            int x = c - 'a';
            
            if(trie[node].child[x] == -1){
                trie[node].child[x] = trie.size();
                trie.emplace_back();
            }
            node = trie[node].child[x];
        }
        trie[node].terminal = true;
    }
    
    int n = s.size();
    
    vector<ll> dp(n+1, 0);
    dp[0] = 1;
    
    for(int i=0; i<n; i++){
        if(dp[i] == 0) continue;
        
        int node = 0;
        
        for(int j=i; j<n; j++){
            int x =  s[j] - 'a';
            
            if(trie[node].child[x] == -1) break;
            
            node = trie[node].child[x];
            
            // a dictionary word ends here
            
            if(trie[node].terminal){
                dp[j+1] += dp[i];
                
                if(dp[j+1] >= mod) dp[j+1] -= mod;
            }
        }
    }
    
    cout << dp[n] << endl;
    
    return 0;
    
	
}
