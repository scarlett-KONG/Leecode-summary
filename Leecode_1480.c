/*
     Leecode 1480 Running Sum of 1d Array
*/


int* runningSum(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int* res = malloc(*returnSize * sizeof(int));

    *res = *nums;

    for(int i=1; i<numsSize; ++i){
        *(res + i) = *(nums+i) + *(res+i-1);
    }

    return res;

}

