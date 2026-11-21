#include<iostream>
#include<climits>
using namespace std;
int main(){
    int x = INT_MAX;
    cout<<x%5<<"\n";
    cout<<(x%5 * 13%5)%5<<"\n";
    return 0;
}