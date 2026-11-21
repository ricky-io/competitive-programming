#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
	// your code goes here
// 	pair<int, int> p;
// 	p.first = 1;
// 	p.second = 5;
// 	cout<<p.first<<" "<<p.second<<endl;
	
	unordered_map<string, int> m;
	pair<string, int> p1;
	p1.first = "Raghav";
	p1.second = 5;
	m.insert(p1);
	pair<string, int> p2;
	p2.first = "Harsh";
	p2.second = 7;
	m.insert(p2);
	
	m["Rishi"] = 15;
	// for printin, use for each loop:
// 	for(pair<string, int> p : m){
// 	    cout<<p.first<<" "<<p.second<<endl;
// 	}
    m.erase("Harsh");
    for(auto p : m){
	    cout<<p.first<<" "<<p.second<<endl;
	}
	cout<<m.size();
	cout<<m.count("Raghav");
	
	

}
