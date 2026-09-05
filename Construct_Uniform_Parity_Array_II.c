bool uniformArray(int* nums1, int nums1Size) {
    int min=INT_MAX;

    for(int i=0;i<nums1Size;i++)
    {
        if(min>nums1[i])min=nums1[i];
    }
    for(int i=0;i<nums1Size;i++)
    {
        if(nums1[i]%2!=min%2&&min%2==0)return false;
    }
    return true;
}
