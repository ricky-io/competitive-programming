#include <bits/stdc++.h>
using namespace std;

// permutaions string backracking

void permutations(string &str, int i){
    if(i == string.size() -1){
        cout<<str<<"\n";
        return;
    }
    
    unordered_set<char> s;
    for(int idx = i; idx<str.size()l idx++){
        if(s.count(str[idx])) continue;
        s.insert(str[idx]);
        
        swap(str[idx], str[i]);
        permutations(str, i-1);
        swap(str[idx], str[i]);
    }
}



int main() {
	// your code goes here
	string str = "abd";
	permutations(str, 0);
	return 0;

}
