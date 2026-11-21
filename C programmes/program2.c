#include<stdio.h>
int main(){
    /* Printing the table of celsius to fagrenheit temperature table */

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   /* lower limit of tempearature scale*/
    upper = 300;  /* upper limit */
    step = 20;     /* step size */
    fahr = lower;
    while(fahr <= upper){
        celsius = 5* (fahr-32) / 9;
        printf("%d \t -->  %d \n", fahr, celsius);
        fahr = fahr + step;
    }


    return 0;
}