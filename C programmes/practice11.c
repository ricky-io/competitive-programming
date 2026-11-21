#include<stdio.h>

int main(){
    int arr[10] = {2,4,6,8,10,1,3,5,11,7};
    int n=15;
    // int count_even = 0;
    // int count_odd = 0;
    for(int i=0; i<10; i++){
       for(int j=i; j<10; j++){
        for(int k=j; k<10; k++){
        if(arr[i]+arr[j]+arr[k]==n) printf("(%d,%d,%d) ", arr[i], arr[j], arr[k]); 
        }
       }
    }
    // int difference = count_even - count_odd;
    printf("\n"); 
    return 0;
}