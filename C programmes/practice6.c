#include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,11};
    printf("Original Array \n");
    
    for(int i=1; i<=9; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    for(int i=0; i<=9; i++){
        if(arr[i]%2==0) arr[i] = arr[i]+10;
        else arr[i] = arr[i]*2;
        
    }
     
    printf("Modified Array \n");
    
    for(int i=1; i<=9; i++){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    
   

    return 0;
}