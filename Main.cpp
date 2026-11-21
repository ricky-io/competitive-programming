#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--){
        int x, y, r;
        cin >> x >> y >> r;

        cout << x+r <<" "<< y << endl;

        // bool found = false;

        // for(int i = -10; i<=10; i++){
        //     for(int j = -10; j <= 10; j++){
        //         if(x*x + y*y + i*i + j*j -2*(x*i + y*j) == r*r){
        //             cout << i <<" " << j << endl;
        //             found = true;
        //         }
        //         if(found) break;
        //     }
        //     if(found) continue;
        // }
    }
    return 0;
}