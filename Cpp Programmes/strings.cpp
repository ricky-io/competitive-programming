//----- Header files //
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
//----- Programs practicing...

int main(){
// 
//     string str = "Hello I am Rishi.";
//     int x = str.length();
//     int y = str.size();
//     cout<<x<<" "<<y<<endl;
//     str.push_back('Y');  // adds single charecter to a string.
//     cout<<str<<endl;
//     str.pop_back();   // deletes last charecter from a string.
//     cout<<str<<endl;
// *//

// string str = "Rishi";
// string ptr = "ronak";
// int x = str.length();
// reverse(ptr.begin()+1, ptr.begin()+4);
// cout<<ptr;
//cout<<str+ptr;

// string str;
// getline(cin, str);
// int x = str.length();
// int count = 0;
// for(int i=0; i<x; i++){
//     if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='u' || str[i]=='i'){
//         count++;
//     }
// }
// cout<<count;

// strings are mutable , they can easily , modified after declaration.

// substr...str.substr(idx, length)

// string str = "Rishikumar";
// cout<<str.substr(1,5);

// // to_string

// int x = 12345;
// string str = to_string(x);
// int y = str.length();
// cout<<str<<endl<<y;

// neighbouring elements are different from each other..
// // i.e || idx 0= only right || idx n= only left || other all idx = check both side || len = 1=1, ;

// string str = "nammamigangaa";
// int x = str.length();
// int idx = -1;
// int count = 0;
// string s;
// for(int i=0; i<x; i++){
//     if(x==1) {
//         count = 1;
//         break;
//     }
//     if(x==2){
//         if(str[i]!=str[i+1]){
//             count++;
//             break;
//         }
//     }
//     if(i==0 || i<x){
//         if(str[i]!=str[i+1]){
//             count++;
//         }
//     }
//     else if(i==x-1){
//         if(str[i]!=str[i-1]){
//             count++;
//         }
//     }
// }
// cout<<x<<endl;
// cout<<count;


// sorting  -->> lexographically , alphabetically, according to ASCII values.
// check whether the both strings are anogram or not....permutation of defferent letters.  
// string str = "rishikumar";
// string ptr = "kumarrihs";
// sort(str.begin(), str.end());
// sort(ptr.begin(), ptr.end());
// if(str==ptr){
// cout<<"true";
// }
// else{
//     cout<<"false";
// }


// Charecter occuring most of the time:
// create a vector for 26chars, 




/// --> use of string stream 
// string str = "Hello world , My name is Rishi kumar.";
// stringstream ss(str);
// string temp;
// while(ss>>temp){
//     cout<<temp<<endl;
// }



//stoi anad stoll

// string s = "12345";
// string t = "1234567765432";
// int x = stoi(s);
// long long y = stoll(t);
// cout<<x<<endl<<y;




string str = "I am the best person in the world the for people of the india and also for the world.";
stringstream ss(str);
vector <string> s;
string temp;
while(ss>>temp){
    s.push_back(temp);
}
int x = s.size();
int count = 1;
string maxS;
for(int i=0; i<x; i++){
    for(int j=1; j<x; j++){
        if(s[i]==s[j]){
            maxS = s[j];
            count++;
        }
    }
}
cout<<maxS<<" -> "<<count<<endl;


    return 0;
}
