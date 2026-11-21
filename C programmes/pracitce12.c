#include<stdio.h>
int main(){
     /// Spiral printing
     int matrix[5][6] = {{1,2,3,4,5,6}, {7,8,9,10,11,12}, {13,14,15,16,17,18}, {19,20,21,22,23,24}, {25,26,27,28,29,30}};
     for(int i=0; i<5; i++){
         for(int j=0; j<6; j++){
             printf("%d ", matrix[i][j]);
         }
         printf("\n");
     }
     /// Spiral printing preparation
     int minr = 0;
     int maxr = 4;
     int minc = 0;
     int maxc = 5;
     int count = 0;
     int tne = 30;
     while(count<tne){
        for(int i=minc; i<=maxc; i++){
        printf("%d ", matrix[minr][i]);
        count++;
        }
        minr++;
        ////---->>>
        for(int i=minr; i<=maxr && count<tne; i++){
        printf("%d ", matrix[i][maxc]); count++;
        }
        maxc--;
        ///--->>>
        for(int i=maxc; i>=minc && count<tne; i--){
        printf("%d ", matrix[maxr][i]); count++;
        }
        maxr--;
        ////---->>>
          for(int i=maxr; i>=minr && count<tne; i--){
        printf("%d ", matrix[i][minc]); count++;
        }
        minc++;
    }
    return 0;
}