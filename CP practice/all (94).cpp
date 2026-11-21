#include <bits/stdc++.h>
using namespace std;

    void weirdAlgo(long long int n){
        if(n == 1){
            //cout<<n<<endl;
            return;
        }
        if(n%2 == 0){
            cout<<n/2<<" ";
            weirdAlgo(n/2);
        }
        else{
            cout<<n*3+1<<" ";
            weirdAlgo(n*3+1);
        }
    }

int main() {
	// your code goes here
	long long int n;
	cin>>n;
	cout<<n<<" ";
	weirdAlgo(n);

}
