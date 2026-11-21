#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int max = arr[0];    //  INT_MIN or INT_MAX for very small and very large value...
    // maximum value  <    /// minimum value >
    for(int i=0; i<=6; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d", max);
    return 0;
}