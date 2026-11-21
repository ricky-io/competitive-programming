//Polymorhphism
//// Function overriding...|

#include<iostream>
#include<string>
#include<vector>
using namespace std;



class A{
    public:    
    int a_ka_public;
   void show(){
    cout<< "me A ka show hu \n";
   }
    
};

class B : public A{
    public:
     int b_ka_public;

     void show(){
        cout<<" aham B show ashmi \n";
     }
    
};




int main(){

    //this is function overriding
    A a;
    a.show();  // me A show hu
B b;
b.show();     // aham B show ashmi
b.A::show();   /// me A ka show hu
   
}