#include<stdio.h>
int main(){
    // AP == 1 3 5 7 9 . . . . till n:--> i<=n 
    // AP == 1 3 5 7 9 . . . . upto n terms:--> i<=2n-1 :---> an=a+(n-1)d

    int n;
    printf("Enter a value : ");
    scanf("%d", &n);
    for(int i=1; i<=2*n-1; i=i+2){
        printf("%d ", i);
    }
    return 0;
}