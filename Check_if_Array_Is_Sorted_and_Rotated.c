bool check(int* nums, int numsSize) {
    // int min=0;
    // int max=0;
    // for(int i=0;i<numsSize-1;i++)
    // {
    //     if(nums[i]>max)
    //     {
    //         max=nums[i];
    //     }
    //     if(nums[i]<min)
    //     {
    //         min=nums[i];
    //     }
    // }
    // int 
    // while(min<=max)
    // {
    //     int mid=max;
    //     if(arr[mid])
    // }
    // return false;
    int count=0;
    if(nums[0]<nums[numsSize-1])
    {
        count++;
    }
    for(int i=0;i<numsSize-1;i++)
    {
        if(nums[i]>nums[i+1])
        {
            count++;
        }
        if(count>1)
        {
            return false;
        }
    }
    return true;
}
