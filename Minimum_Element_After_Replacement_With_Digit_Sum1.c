int minElement(int* nums, int numsSize) {
    int m=nums[0],rem=0,min=nums[0];
    for(int i=0;i<numsSize;i++)
    {
        int sum=0;
        while(nums[i]!=0)
        {
            rem=nums[i]%10;
            sum+=rem;
            nums[i]/=10;
        }
        nums[i]=sum;
        if(nums[i]<m)m=nums[i];

    }
    return m;
}
