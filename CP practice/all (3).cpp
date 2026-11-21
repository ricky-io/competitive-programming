#include <iostream>
#include <unordered_set>
#include <map>
#include <set>
using namespace std;

int main() {
	// your code goes here
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(7);
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
    map<int, int> m;
    m[2] = 4;
    m[1] = 1;
    m[3] = 9;
    for( auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
    map<string, int> temp;
    temp["Gagan"] = 1;
    temp["Kartavya"] = 9;
    temp["Rishi"] = 4;
    for( auto x : temp){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
