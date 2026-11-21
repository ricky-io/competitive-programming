#include<stdio.h>
int main(){
    int arr[4][3];
    for(int i=0; i<4; i++){
        printf(" Marks of Roll No. %d \n\n", i+1);
        for(int j=0; j<1; j++){
            printf("Enter physics : ");
            scanf("%d", &arr[i][j]);
            // printf("\n");
        }
        for(int j=1; j<2; j++){
            printf("Enter maths : ");
            scanf("%d", &arr[i][j]);
            // printf("\n");
        }
        for(int j=2; j<3; j++){
            printf("Enter english : ");
            scanf("%d", &arr[i][j]);
            // printf("\n");
        }
        // printf("\n");
    }
    printf("\n");
    for(int i=0; i<4; i++){
        printf("Roll No. %d : ", i+1);
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}