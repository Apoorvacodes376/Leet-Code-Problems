int firstStableIndex(int* nums, int numsSize, int k) {
    long long arr[numsSize],max=INT_MIN,min=INT_MAX;
    for(int i=0;i<numsSize;i++)
    {
        max=INT_MIN;
        min=INT_MAX;
        for(int j=0;j<=i;j++)
        {
            if(nums[j]>max)
            {
                max=nums[j];
                // arr[i]=max;
            }
        }
        for(int j=i;j<numsSize;j++)
        {
            if(nums[j]<min)
            {
                min=nums[j];
                // arr[i]=min;
            }
        }
        arr[i]=max-min;
    }
    int x=0,flag=0;
    // while(arr[x]!=0)
    for(int x=0;x<numsSize;x++)
    {
        if(arr[x]<=k) return x;
        // if(min>k) flag=1;
        // x++;
    }
    return -1;
}
