
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int count = 1;
    int a[n][n];

    for(int j=0; j<n; j++){
      for(int i=0; i<n; i++){            
              a[0][i] = count; count++; printf("%d ", a[0][i]);
      
      }
      printf("\n");
}
    return 0;
}