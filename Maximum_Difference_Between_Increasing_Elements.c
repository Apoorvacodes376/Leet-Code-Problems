int maximumDifference(int* nums, int numsSize) {
    int diff=-1;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            if(nums[i]<nums[j]&&i<j)
            {
                if(diff<nums[j]-nums[i])diff=nums[j]-nums[i];
            }
        }
    }
    return diff;
}
