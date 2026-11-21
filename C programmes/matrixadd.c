#include<stdio.h>
int main(){
    int a[2][3] = {{1,2,3}, {4,5,6}};
    int b[2][3] = {{4,5,6}, {1,2,3}};
    int c[2][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    //// TRANSPOSE OF ADDITION MATRIX....
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            printf("%d ", c[j][i]);
        }
        printf("\n");
    }


    /// SUm of elements...
    // int sum = 0;
    // for(int i=0; i<2; i++){
    //     for(int j=0; j<2; j++){
    //         sum = sum + a[i][j];
    //     }
    // }
    // printf("sum %d", sum);

    return 0;

}