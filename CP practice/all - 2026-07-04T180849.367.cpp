#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> hours(24);
    
    for(int i=0; i<=23; i++){
        hours[i] = i;
    }
    
    
    int X, Y, L, R, A, B;
    cin>> X >> Y >> L >> R >> A >> B;
    
    int hours_normal = 0;
    int hours_premium = 0;
    
    for(int i = A+1; i <= B; i++){
        if(i > L && i <= R) hours_premium++;
        else hours_normal++;
    }
    
    int total_price = hours_premium*X + hours_normal*Y;
    
    cout<<total_price<<endl;
    
    

}
