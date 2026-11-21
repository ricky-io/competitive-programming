#include<stdio.h>
int main(){
    //char ch[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char ch[6] = "Hello";
    // for(int i=0; i<5; i++){
    //     printf("%c", ch[i]);
    // }
    int i=0;
    while(ch[i] != '\0'){
        printf("%c", ch[i]);
        i++;
    }


    return 0;
}