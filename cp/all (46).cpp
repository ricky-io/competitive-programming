#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	double h, w;
	cin>>h>>w;
	
	double bmi = 10000.0 * w / (h * h);
	
	cout<<(bmi >= 25.00 ? "Yes" : "No")<<endl;
	
	return 0;

}
