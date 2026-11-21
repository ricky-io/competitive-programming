#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v();
    //int size = v.size();
    for(int i=0; i<6; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<6; i++){
        cout<<v[i]<<" ";
    }
return 0;
}