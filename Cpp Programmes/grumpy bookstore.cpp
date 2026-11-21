#include <iostream>
using namespace std;

int maxSatisfied(int customers[], int grumpy[], int minutes) {
        int n = 8;

    int baseSum = 0;
    for (int i = 0; i < n; i++) {
        if (grumpy[i] == 0)
            baseSum += customers[i];
    }

    int windowSum = 0;
    for (int i = 0; i < minutes; i++) {
        if (grumpy[i] == 1)
            windowSum += customers[i];
    }

    int maxWindowSum = windowSum;

    for (int i = minutes; i < n; i++) {
        if (grumpy[i] == 1)
            windowSum += customers[i];
        if (grumpy[i - minutes] == 1)
            windowSum -= customers[i - minutes];

        maxWindowSum = max(maxWindowSum, windowSum);
    }

    return baseSum + maxWindowSum;

    }

int main() {
	// your code goes here
	int customers[8] = {1,0,1,2,1,1,7,5};
	int grumpy[8] = {0,1,0,1,0,1,0,1};
	int minutes = 3;
	cout<<maxSatisfied<<endl;
	
	return 0;
	
}
