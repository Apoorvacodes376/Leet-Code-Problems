int minimumDeletions(int* nums, int numsSize) {
    int min=INT_MAX,max=INT_MIN,mini=0,maxi=0;
    if(numsSize==1)return 1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<min)
        {
            min=nums[i];
            mini=i;
        }
        if(nums[i]>max)
        {
            max=nums[i];
            maxi=i;
        }
    }
    int cf=0,cb=0,cfb=0;
    if(mini>maxi)cf=mini+1;
    else if(maxi>mini)cf=maxi+1;
    if(numsSize-mini>numsSize-maxi)cb=numsSize-mini;
    else if(numsSize-mini<numsSize-maxi)cb=numsSize-maxi;
    if(mini<maxi)cfb=mini+numsSize-maxi+1;
    else if(mini>maxi)cfb=maxi+numsSize-mini+1;
    return fmin(cf,fmin(cb,cfb));
}
