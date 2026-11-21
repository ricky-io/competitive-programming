#include<stdio.h>
int main(){
    int a[3][4] = {{1,0,1,1}, {1,1,0,0}, {0,0,1,0}};
    int maxsum = 0;
    int idx = -1;
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<4; j++){
            if(a[i][j] == 1) sum++;
            if(maxsum<sum){ maxsum = sum; idx = i;}
        }
        printf("\n");
    }
    printf("%d %d", maxsum, idx);
    return 0;
}