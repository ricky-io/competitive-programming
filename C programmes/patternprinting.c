#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d ", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            // if(j==3 || i==3) printf("*");
            if(i==j || i+j==n+1) printf("*");
            else printf(" ");
        }
        printf(" \n");
    }
}