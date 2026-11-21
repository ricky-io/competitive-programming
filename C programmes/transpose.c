#include<stdio.h>
int main(){
    //// Matrix is nxn...then transpose In Place::....
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // Print the Original Matrix
    printf(" ORIGINLA MATRIX \n \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // Print the Transposed Matrix 
    printf(" TRANSPOSED MATRIX  \n \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            int c = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = c;
            // printf("%d ", arr[i][j]);
        }
         printf("\n");
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[j][i]);
        }
         printf("\n");
    }

////--->>> Rotation 90' of the Matrix...<<<-----/////
///it is rotation of transposed matrix..

    for(int i=0; i<3; i++){
        int j=0;
        int k=2;  // k=n-1//
        while(j<2){
            ///Swap arr[i][j] and arr[i][k]
            int d = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = d;
            j++;
            k--;
        }
    }
    printf("\n Rotated Matrix.. 90' \n\n");
    for(int i=0; i<3; i++){
        for(int k=0; k<3; k++){
            printf("%d ", arr[i][k]);
        }
         printf("\n");
    }


    return 0;
}