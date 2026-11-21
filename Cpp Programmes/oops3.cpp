//Inheritance 

#include<iostream>
#include<string>
#include<vector>
using namespace std;


class Vehicle{  /// Base class, Parent class
public: 
    int tyresize;
    int enginesize;
    int lights;
    string companyName;

    Vehicle(){
        cout<<"Vehicle ka constructor call hua !! \n";
    }
};

class Car : public Vehicle{  /// Child class, Derived class, Inherited class
public: 
    // int tyresize;
    // int enginesize;
    int steeringsize;       //// Different properties....
    // int lights;
    // string companyName;
};

class Bike : public Vehicle{
public:
    // int tyresize;
    // int enginesize;
    int handlesize;
    // int lights;
    // string comapnyName;

    Bike() {
        cout<<"Bike ka constructor call hua !! \n";
    }
};

class A{
    private:    /// can't be access, can't be inherited
    int a_ka_private;
    public:    ///can be access, can be inherited
    int a_ka_public;
    A(){
        cout<< "A ka constructor call hua \n";
    }
    protected:     /// can't be access, can be ingerited
    int a_ka_protected;
};

class B : protected A{ //a-ka-protected, a-ka-protected as protected
    public:
    int b_ka_public;

    void show(){
        a_ka_protected = 5;
    }
     B(){
        cout<< "B ka constructor call hua \n";
    }
};

class C : public B{ // b ka public as public, a ka protected, a ka public as protected
    public:
    int c_ka_public;

    void show(){
        a_ka_public;
    }
    C(){
        cout<< "C ka constructor call hua \n";
    }
};


int main(){

    // Bike honda;
    // honda.handlesize = 5;
    // honda.enginesize = 500;
    // honda.tyresize = 10;
    // cout<<honda.tyresize<<endl;

   // A a;
   //B b;
   
   
}