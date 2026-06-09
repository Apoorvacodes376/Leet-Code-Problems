long long maxTotalValue(int* nums, int numsSize, int k) {
    long long sum=0, max=0,min=INT_MAX;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]>max)max=nums[i];
        if(nums[i]<min)min=nums[i];
    }
    sum=max-min;
    return sum*k;
}
