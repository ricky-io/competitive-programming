#include<stdio.h>
int main(){
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    // Print the Original Matrix
    printf(" ORIGINLA MATRIX \n \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n\n");
    }

    // Code for Spiral Printing...
    int minr = 0;
    int maxr = 2; //m-1
    int minc = 0;
    int maxc = 3; //n-1
    int tne = 12; //m*n
    int count = 0;

    while(count<tne){
        for(int j=minc; j<=maxc && count<tne; j++){
            printf("%d ", arr[minr][j]);
            count++;
        }
        minr++;
        for(int i=minr; i<=maxr && count<tne; i++){
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;
        for(int j=maxc; j>=minc && count<tne; j--){
            printf("%d ", arr[maxr][j]);
            count++;
        }
        maxr--;
        for(int i=maxr; i>=minr && count<tne; i--){
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
    }

    return 0;
}