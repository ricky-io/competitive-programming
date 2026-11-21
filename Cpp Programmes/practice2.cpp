#include<iostream>
using namespace std;
// Ternary and Switch
int main(){
    //  int marks;
    //  cout<<"Enter marks";
    // //  cin>>marks;
    //  //COndition ? true : false ;
    //  marks>33? cout<<"Pass": cout<<"Fail";
    int x;
    cin>>x;
    switch (x)
    {
    case 1:
        cout<<"Monday";
        break;
         case 2:
        cout<<"Tuesday";
        break;
         case 3:
        cout<<"Wednesday";
        break;
         case 4:
        cout<<"Thursday";
        break;

         case 5:
        cout<<"Friday";
        break;
         case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
    
    default:
        break;
    }
    return 0;
}

