int absDifference(int* nums, int numsSize, int k) {
    // int max1=INT_MIN, max2=INT_MIN, min1=INT_MAX,min2=INT_MAX;
    // int max1=0, max2=0, min1=101,min2=101;
    // for(int i=0;i<numsSize;i++)
    // {
    //     if(max1<nums[i])max1=nums[i];
    //     if(max2<nums[i]&&max2!=max1)max2=nums[i];
    //     if(min1>nums[i])min1=nums[i];
    //     if(min2>nums[i]&&min2!=min1)min2=nums[i];
    // }
    // int min=min1+min2;
    // int max=max1+max2;
    // return abs(max-min);
    // return max1+max2-(min1+min2);
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<numsSize-1-i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<k;i++)
    {
        sum1+=nums[i];
    }
    for(int i=numsSize-k;i<numsSize;i++)
    {
        sum2+=nums[i];
    }
    return abs(sum2-sum1);
}
