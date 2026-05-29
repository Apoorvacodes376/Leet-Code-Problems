int minElement(int* nums, int numsSize) {
    int rem,min=INT_MAX,sum=0;
    for(int i=0;i<numsSize;i++)
    {
        while(nums[i]!=0)
        {
            rem=nums[i]%10;
            // max=nums[i];
            if(min>rem)min=rem;
            nums[i]/=10;
        }
        nums[i]=min;
    }
    return min;
}

// To be replaced by actual code!
