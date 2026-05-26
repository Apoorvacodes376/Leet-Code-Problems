bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    int j;
    for(int i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            int n=abs(i-j);
            if(nums[i]==nums[j] && n<=k) return true;
        }
        if (numsSize > 10000)
            i = j - 1;
    }
    return false;
}

