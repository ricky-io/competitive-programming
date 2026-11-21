#include<iostream>
using namespace std;

class bike{
    public:
    static int noofbikes;  // directly belongs to class, not object.  //static member
    int tyresize;
    int enginesize;



//     bike(){  // default constructor
//         cout<<"constructor call hua \n";
// }

        // bike (int tyresize, int enginesize){    // parameterised constructor
        //     this->tyresize = tyresize;
        //     this->enginesize = enginesize;
        //     cout<<"constructor ko call hua \n";
        // }


        bike (int ts, int es = 200) : tyresize(ts), enginesize(es){}

        //// Constructor overloading.....///--- to not use different names each time, just change value and get required output...
        // bike (int ts, int es) : tyresize(ts), enginesize(100){}
        // bike () : tyresize(12), enginesize(100){}

        ~bike (){
             cout<<"destructor call hua\n";
        }
        static void setnoofbikes(){    //static function
            noofbikes++;
        }



};
int bike::noofbikes=10;
int main(){
//  bike tvs;  //object created  // constructor ko call gyi
//  bike royal_enfield;
//  bike honda;

bike tvs(12,50);  //object created  // constructor ko call gyi
 bike royal_enfield(13,65);
 bike honda(15,75);
 
 cout<<honda.noofbikes<<endl;
 royal_enfield.setnoofbikes();
 cout<<royal_enfield.noofbikes<<endl;

bool flag = true;
if(flag == true){
    bike bmw(17,500);
  cout<<bmw.tyresize<<" "<<bmw.enginesize<<endl;
}

 cout<<tvs.tyresize<<" "<<tvs.enginesize<<endl;
 cout<<honda.tyresize<<" "<<royal_enfield.enginesize<<endl;
 cout<<royal_enfield.tyresize<<" "<<honda.enginesize<<endl;


}