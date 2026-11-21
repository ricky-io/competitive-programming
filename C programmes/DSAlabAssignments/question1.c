
// 1. Write a program to calculate the sum of 5 integers in an array using pointers

// Algorithm / Logic

// Declare an integer array of size 5.

// Declare an integer pointer and point it to the first element of the array.

// Traverse the array using pointer arithmetic.

// Add each element to a sum variable.

// Display the final sum.


#include<stdio.h>
int main(){
    //taking integers input
    int arr[5];
    int *ptr; 
    int sum = 0;
    ptr = arr;
    // Input elements
    for(int i=0; i<5; i++){
        scanf("%d", ptr + i);
        if(ptr == NULL) {
            break; printf("Error");
        }
    }
    // Calculate sum using pointer
    for(int i=0; i<5; i++){
        sum = sum + *(ptr + i);
    }
    // Display the sum
    printf(" sum = %d", sum);
    return 0;
}