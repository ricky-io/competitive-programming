#include<iostream>
#include<cmath>
using namespace std;
int maxi(int a, int b){
if(a>b) return a;
else return b;
}
int main(){
    int x,y;
    cin>>x>>y;
    int least =  min(x,y);
    int great = maxi(x,y);
    cout<<"least = "<<least<<"  "<<"great = "<< "  "<<great;

    return 0;
}