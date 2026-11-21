#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z,w;

    for(int i=1; i<=9; i++){
        if(i==i) printf("%d is armstrong number.\n", i);
    }
    for(int i=10; i<=99; i++){
        x = i%10;
        y = ((i%100)-x)/10;
        x = x*x;
        y = y*y;
       
        if(i==x+y) printf("%d is Armstrong number.\n", i);
    }
    for(int i=100; i<=500; i++){
        x = i%10;
        y = ((i%100)-x)/10;
        z = ((i%1000)-y)/100;
        if(i==pow(x,3)+pow(y,3)+pow(z,3)) printf("%d is Armstrong number.\n", i);
    }
    

    return 0;
}