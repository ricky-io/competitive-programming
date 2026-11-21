#include<stdio.h>

int main(){
    int arr[10] = {2,3,5,7,9,12,43,56,78,11};
    int n=15;
    int count = 0;
    for(int i=0; i<10; i++){
        if(n<arr[i]){ count++; printf("%d ,", arr[i] );}
    }
    printf("\n %d", count); 
    return 0;
}