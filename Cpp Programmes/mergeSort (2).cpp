#include <iostream>
#include <vector>
using namespace std;

// Merge Sort algortihtm:

void merge(vector<int>& a, vector<int>& b, vector<int>& v){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            v[k++] = a[i++];
        }
        else v[k++] = b[j++];
    }
    if(i==a.size()) while(j<b.size()){
        v[k++] = b[j++];
    }
    if(j==b.size()) while(i<a.size()){
        v[k++] = a[i++];
    }
}
void mergeSort(vector <int>& v){
    int n = v.size();
    if(n<=1) return;
    int n1 = n/2;
    int n2 = n - n1;
    vector<int> a(n1);
    vector<int> b(n2);
    // copy/ pasting
    for(int i=0; i<n1; i++){
        a[i] = v[i];
    }
    for(int i=0; i<n2; i++){
        b[i] = v[i+n1];
    }
    // recursion merging
    mergeSort(a);
    mergeSort(b);
    // now merging again (summing to 1);
    merge(a,b,v);
}
int main(){
    vector <int> v(7);
    int arr[7] = {5, 1, 3, 0, 4, 9, 6};
    for(int i=0; i<7; i++){
        v[i] = arr[i];
    }
    
    mergeSort(v);
    
    for(int i=0; i<7; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
