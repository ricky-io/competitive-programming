//Inheritance 
/// Diamond Problem....|
//// we use virtual here...|

#include<iostream>
#include<string>
#include<vector>
using namespace std;



class A{
    public:    
    int a_ka_public;
    A(){
        cout<<"A constructor call hua \n";
    }
    
};

class B : virtual public A{
    public:
     int b_ka_public;
      B(){
        cout<<"B constructor call hua \n";
    }
};

class C : virtual public A{ 
    public:
    int c_ka_public;
   
};

class D : public B, public C{
    public:
    int d_ka_public;
    
    void show(){
        cout<<a_ka_public<<endl;
    }
};


int main(){

   D d;
   d.a_ka_public = 10;
   d.show();
   
}