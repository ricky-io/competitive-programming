#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,11};
    int a = INT_MAX;
    for(int i=0; i<=9; i++){
        if(a>arr[i]) a=arr[i];
        // else printf("%d is minimum number", arr[i]);
    }
    printf("%d is minimum number", a);


    return 0;
}