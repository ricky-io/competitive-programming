#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int prdt = 1;
    for(int i = 1; i<=n; i++){
        prdt = prdt*i;
    }
    printf("The factorial is : %d", prdt);
    return 0;
}