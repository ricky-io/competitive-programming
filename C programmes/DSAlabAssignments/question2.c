
///2. Write a program to generate a file containing 1000 rows of 5 integers in each line. Integers
////randomly generated are comma separated. 


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    FILE *ptr;
    ptr = fopen("test.txt", "w");
    if(ptr==NULL){
        printf("Error: Couldn't open file.");
        return 1;
    }
    
    srand(time(NULL));
        for(int i=0; i<100; i++){
            for(int j=0; j<5; j++){
                int r = rand() % 10;
                fprintf(ptr, "%d", r);
                if(j<4){
                    fprintf(ptr, ", ");
                }
                //fprintf(ptr, " ");
            }
            fprintf(ptr, "\n");
        }
    fclose(ptr);
    printf("File generated successfully. \n");    
    return 0;

}