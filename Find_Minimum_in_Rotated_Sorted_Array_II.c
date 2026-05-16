int findMin(int* nums, int numsSize) {
    int temp=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        if(temp>nums[i])temp=nums[i];
    }
    return temp;
}
