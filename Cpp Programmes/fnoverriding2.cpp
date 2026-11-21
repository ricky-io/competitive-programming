//Polymorhphism
//// Function overriding...using pointers..
/// we use virtual functions her....  problem... type and addresss of pointer while calling functions...
//// virtual functions run on the basis of RUNTIME......
/////Abstract Class..related virtual functions..pure 
//////Abstract class...which only have pure virtual funcitons...
#include<iostream>
#include<string>
#include<vector>
using namespace std;



class Vehicle{
    public: 
    int tyresize;
// here we use....

    virtual void calculateMileage() = 0;  //pure virtual function
    virtual void refuel() = 0;

    
    
};

class Bike : public Vehicle{
    public:
    int handlesize;
    void show(){
        cout<<"Bike ka  show\n";
    }
    
};




int main(){

    /// compiler POV  - Vehicle type ka hai
    /// runtime POV - Bike ka address hai
/// compile time binding....
///runtime binding...-virtual


    // Bike b;
    // Vehicle *a;
    // a = &b;     ///address b ka hai, but type a ka hai...then ye kisko show karega....
   // a->handlesize;  ----can't access
   // a->companyName;
   // a->show();


//    a = new Bike;
//    a->show();
//    a = new Vehicle;
//    a->show();

    Vehicle a;
    Bike b;
    cout<<sizeof(a)<<endl;    //wihtout virtual = 36, with virtual = 40
    cout<<sizeof(b)<<endl;      //wihtout virtual = 40, with virtual = 44
}


//when we use virtual... ion background two variable created ,, Vptr--(create a virtual pointer) and Vtable-(create a virtual table to store other variables)



