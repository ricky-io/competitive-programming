#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	// your code goes here
    string s;
    cin>>s;
    int count = 0;
    int x = s.length();
    for(int i=0; i<x; i++){
        if(x==1){
            break;
        }
        if(x==2 && s[0]!=s[1]){
            count = 1;
            break;
        }
        if(i==0){
            if(s[i]!=s[i+1]){ count++;
            }
        }
        else if(i==x-1){
            if(s[i]!=s[i-1]){ count++;
            }
        }
        else if(s[i]!=s[i+1] && s[i]!=s[i-1]){
            count++;
        }
    }
    cout<<count;
	return 0;
}