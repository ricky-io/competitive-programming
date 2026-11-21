#include<stdio.h>
int main(){
//int target;
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    

    //int nums[10000];
    for(int i=0; i<=numsSize; i++){
        printf("nums = ");
        scanf("%d", &nums[i]);
    }
    //int target;
    printf("target");
    scanf("%d", &target);

    for(int i=0; i<=10000; i++){
        for(int j=i+1; j<=10000; j++){
            if(nums[i]+nums[j]==target) break; printf("(%d, %d)", nums[i], nums[j]); 
        }
    }

}


    return 0;
}