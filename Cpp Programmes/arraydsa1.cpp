#include<iostream>
using namespace std;
void display(int a[]){ // this a is not an array, it is an pointer to acess that array.
    for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){
    b[0] = 100;
}
int main(){
    int arr[5] = {2,4,5,6,3};
    int size = sizeof(arr)/sizeof(arr[0]); 
// accessing elements of array in different function
// updation, pass by value/reference
cout<<size<<endl;
display(arr);
change(arr);
display(arr);
    int *ptr = arr;
    display(ptr);
return 0;
}