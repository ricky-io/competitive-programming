#include<iostream>
using namespace std;
void lastd(int *n){
   int fd = *n;
   for(int i=1; fd>9; i++){
    fd/=10;
   }
   cout<<"first digit  "<<fd<<endl;
   return;
}
int main(){
    int n;
    cin>>n;
    int fsd = n%10;
    lastd(&n);
    cout<<"last digit  "<<fsd<<endl;
    return 0;
}

