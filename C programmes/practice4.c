#include<stdio.h>
#include<limits.h>
void fun(int arr[]){
    arr[0] = 10;
    return;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,11};
    printf("%d\n", arr[0]);
    fun(arr);
    printf("%d", arr[0]);


    return 0;
}