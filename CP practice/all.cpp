#include<iostream>
#include<climits>
#include<vector>
using namespace std;

// Merging two sorted arrays :

void merge(vector<int>& a, vector<int>& b, vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res[k++] = a[i++];
        }
        else res[k++] = b[j++];
    }
    if(i==a.size()) while(j<b.size()){
        res[k++] = b[j++];
    }
    if(j==b.size()) while(i<a.size()){
        res[k++] = a[j++];
    }
}

int main(){
    int n1;
    cin>>n1;
    int arr[n1];
    for(int i=0; i<n1; i++){
        cin>>arr[i];
    }
    int n2;
    cin>>n2;
    int brr[n2];
    for(int i=0; i<n2; i++){
        cin>>brr[i];
    }
    vector<int> a(arr, arr+n1);
    vector<int> b(brr, brr+n2);
    vector<int> res(n1+n2);
    merge(a, b, res);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}
