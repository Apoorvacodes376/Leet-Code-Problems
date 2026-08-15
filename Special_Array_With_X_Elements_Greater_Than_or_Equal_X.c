int specialArray(int* nums, int numsSize) {
    int x=0;
    for(int i=0;i<=numsSize;i++)
    {
        x=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[j]>=i)x++;
        }
        if(x==i)return i;
    }
    return -1;
}
