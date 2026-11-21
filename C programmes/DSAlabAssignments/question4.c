
/// 4. Without using any string.h library functions Write a program to find the length of a string. 

#include<stdio.h>
#include<string.h>
int main(){
    char *str = (char*)malloc(100 * sizeof(char));
    scanf("%s", str);
   int i=0;
   int count = 0;
   while(str[i]!='\0'){
    count++;
    i++;
   }
   printf("%d", count);
   free(str);
   return 0;
}

