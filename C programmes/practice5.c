#include<stdio.h>
#include<limits.h>
void fun(int arr[]){
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,11};
    for(int i=0; i<=9; i++){
        printf("%d ", arr[i]);
    }
    fun(arr);
    printf("\n");
    for(int i=0; i<=9; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}