//5. Without using any string.h library functions Write a program to convert a string to lowercase

#include<stdio.h>
#include<stdlib.h>
int main(){
    char *str = (char*) malloc(100*sizeof(char));
    scanf("%s", str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i] >= 'A' && str[i] <= 'Z'){
             str[i]=str[i]+32;
        }
        i++;
    }
    printf("%s", str);
    free(str);
    return 0;
}