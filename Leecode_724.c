int pivotIndex(int* nums, int numsSize){
    int index =0, i=0;
    int lsum=0, rsum=0;//left sum and right sum

    for(i=index+1;i<numsSize;i++){
        rsum+=nums[i];//Firstly, add from the 1st one in the nums array 
    }

    while(index<numsSize-1){ //Secondly,lsum adds from the 0        
        if(rsum==lsum)
            return index;
        lsum += nums[index];
        rsum -= nums[++index];
    }
    if(lsum==rsum){
        return numsSize-1;
    }
    return -1;
}
