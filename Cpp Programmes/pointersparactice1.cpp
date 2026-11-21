#include<iostream>
using namespace std;
void find(int x, int *ptr1, int *ptr2){
    *ptr2 = x%10;
    //*ptr1 = 0;
    while(x>9){
        x=x/10;
    }
    *ptr1 = x;
    return;
}
int main(){
    int x;
    cin>>x;
    int firstdigit, lastdigit;
    int *ptr1 = &firstdigit;
    int *ptr2 = &lastdigit;
    find(x, ptr1, ptr2);
    cout<<"firstdigit = "<<firstdigit<<" "<<endl<<"lastdigit = "<<lastdigit;
    return 0;
}