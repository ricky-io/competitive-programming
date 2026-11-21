#include<stdio.h>
int main(){
    int n;
    printf("Enter a value : ");
    scanf(" %d", &n);
    printf("The table of %d is : \n", n);
    for(int i=n; i<=n*10; i=i+n){
       printf("%d", i);
        printf("\n");
    }
    // printf("\n");
    return 0;
}