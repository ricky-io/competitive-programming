//Reversing a string...//

#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    puts("Enter a string ");
    //
    //scanf("%[^\n]s", str);
    gets(str);
    //size
    int size = 0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;


    }

    for(int i=0, j=size-1; i<=j; i++, j--){
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }

    puts("The reverse string is : ");
    puts(str);
    return 0;
}