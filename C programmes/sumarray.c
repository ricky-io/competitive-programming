#include<stdio.h>
int main(){
    int arr[5] = {2, 4, 6, 8, 0};
    int sum = 0;
    int prdt = 0;
    for(int i=0; i<=4; i++){
        sum = sum + arr[i];
        prdt = prdt * arr[i];
    }
    printf("The sum of elements of array is %d \n", sum);
    printf("The product of elements of array is %d \n", prdt);
    return 0;
}