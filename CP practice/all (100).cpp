#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    long long M;  // M can be up to 10^14, so use long long
    cin >> N >> M;
    
    vector<long long> X(N);  // distances (increasing)
    vector<long long> C(N);  // activation costs
    
    for(int i = 0; i < N; i++) {
        cin >> X[i] >> C[i];
    }
    
    long long maxLength = 0;
    long long currentCost = 0;
    int left = 0;
    
    // Sliding window: expand right, shrink left when needed
    for(int right = 0; right < N; right++) {
        currentCost += C[right];
        
        // If budget exceeded, move left pointer to reduce cost
        while(currentCost > M && left <= right) {
            currentCost -= C[left];
            left++;
        }
        
        // Valid window found: stations [left, right] have total cost <= M
        if(currentCost <= M) {
            // Cable length = distance from leftmost to rightmost station
            long long cableLength = X[right] - X[left];
            maxLength = max(maxLength, cableLength);
        }
    }
    
    cout << maxLength << endl;
    
    return 0;
}