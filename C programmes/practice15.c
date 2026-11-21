#include<stdio.h>
#include<string.h>
int main(){
    char arr[6] = {'h','e','l','l','o','\0'};
   int i=0;
   while(arr[i]!='\0'){
    printf("%c", arr[i]);
    i++;
   }
   int b[] = "Hello";
   int j=0;
   while(b[j]!='\0'){
    printf("%s", b);
    j++;
   }
    return 0;
}