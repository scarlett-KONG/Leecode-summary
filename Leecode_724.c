int pivotIndex(int* nums, int numsSize){
    int pivot=0, i=0;
    int lsum=0, rsum=0;

    for(i=pivot+1;i<numsSize;i++){
        rsum+=nums[i];
    }

    while(pivot<numsSize){
        if(rsum==lsum)
            return pivot;
        lsum += nums[pivot];
        rsum -= nums[++pivot];
    }
    return -1;
}