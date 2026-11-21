#include<stdio.h>

int main(){
    int arr[10] = {1,2,1,2,1,2,1,2,1,2};
   // int n=15;
    int count_even = 0;
    int count_odd = 0;
    for(int i=0; i<10; i++){
        //if(n<arr[i]){ count++; printf("%d ,", arr[i] );}
        if(arr[i]%2==0) count_even = count_even+arr[i];
        else count_odd = count_odd+arr[i];
    }
    int difference = count_even - count_odd;
    printf("\n %d", difference); 
    return 0;
}