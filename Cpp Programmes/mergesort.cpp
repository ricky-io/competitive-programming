#include<iostream>
#include<climits>
#include<vector>
using namespace std;

// Merging two sorted arrays :

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c = m+n;
        vector<int> res(c);
        int i=0;
        int j=0;
        int k=0;
        while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            res[k++] = nums1[i++];
        }
        else res[k++] = nums2[j++];
    }
    while(i < m){
    res[k++] = nums1[i++];
    }
    while(j < n){
    res[k++] = nums2[j++];
    }

    for(int p=0; p<m+n; p++){
        nums1[p] = res[p];
    }
}
// void mergeSort(vector<int>&v){
//     int n = v.size();
// }
int main(){
    int arr[] = {2,4,6,8,0};
    int n1 = sizeof(arr)/sizeof(arr[0]);
    int brr[] = {1,3,5,7,9};
    int n2 = sizeof(brr)/sizeof(brr[0]);
    vector<int> a(arr, arr+n1);
    vector<int> b(brr, brr+n2);
    vector<int> res(n1+n2);
    merge(a, b, res);
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}