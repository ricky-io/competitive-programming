long long largestRectangleArea(int N, vector<int>& A) {
    
        // check using 2 pointer
        
        int i=0; int j=1; long long max_area = 0;
        while(i<N-1){
            
            if(A[j] >= A[i]){
                while(j<N){
                long long rect = min(A[j] , A[i]) * (j-i);
                max_area = max(max_area, rect);
                j++;
                }
            }
            i = j;
            j = i+1;
        }
        
        return max_area;
}