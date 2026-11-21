#include<iostream>
using namespace std;
void startriangle(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void greet(){
    cout<<"Good morning"<<endl;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    greet();  // function call
    startriangle(a);
    startriangle(b);
    startriangle(c);
    return 0;
}