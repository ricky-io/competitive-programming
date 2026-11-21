#include<iostream>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    int i=0;
    while(i<t){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
        }
        int max = INT_MIN;
        for(int k=0; k<n; k++){
            if(max<arr[k]){
                max = arr[k];
            }
        }
       cout<<max*n<<endl;
       i++;
    }
}