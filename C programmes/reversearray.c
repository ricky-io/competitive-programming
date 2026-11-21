#include<stdio.h>
int main(){
    int arr[3];
    for(int i=0; i<3; i++){
        printf("Enter element no. %d ", i+1);
        scanf("%d", &arr[i]);    
    }
    for(int i=2; i>=0; i--){
        printf("%d", arr[i]);
    }
    return 0;
}