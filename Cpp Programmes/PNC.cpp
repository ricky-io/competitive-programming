#include<iostream>
#include<cmath>
using namespace std;
int fact(int x){
    int fact = 1;
    for(int i=1; i<=x; i++){
        fact*=i;
    }
    return fact;
   // return 0;
}

int main(){

    int n, r;
    cin>>n>>r;
    int combination = fact(n)/(fact(r)*fact(n-r));
    cout<<"nCr = "<<combination; 
}

