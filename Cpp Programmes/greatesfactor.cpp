#include<iostream>
using namespace std;

int num(int x, int y){
    if(x<=y) return x;
    else return y;
}

int great(int x, int y){
    int a = num(x, y);
    int hcf = 1;
    for(int i = a; i>=1; i--){
        if(x%i==0 && y%i==0) {hcf = i; break;}
    }
    return hcf;
}

int main(){
    int a,b;
    cin>>a>>b;
    //num(x,y);
    int hcf = great(a,b);
    cout<<hcf;

}