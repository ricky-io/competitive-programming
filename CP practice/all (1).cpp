#include<iostream>
using namespace std;
int main(){
    int m;
    int n;
    cin>>m;
    cin>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
        // Code for Spiral Printing...
    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
    int tne = m*n;
    int count = 0;

    while(count<tne){
        for(int j=minc; j<=maxc && count<tne; j++){
            cout<<arr[minr][j];
            count++;
        }
        minr++;
        for(int i=minr; i<=maxr && count<tne; i++){
            cout<<arr[i][maxc];
            count++;
        }
        maxc--;
        for(int j=maxc; j>=minc && count<tne; j--){
            cout<<arr[maxr][j];
            count++;
        }
        maxr--;
        for(int i=maxr; i>=minr && count<tne; i--){
            cout<<arr[i][minc];
            count++;
        }
        minc++;
    }
    return 0;
}
