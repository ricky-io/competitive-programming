#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x = 9;
    bool flag = false;
    for(int i=0; i<=6; i++){
        if(arr[i]==x){
            flag = true;
            break;
        }
    }
    if(flag == false) printf("%d is not present.", x);
    else printf("%d is present.", x);
    return 0;

}