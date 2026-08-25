int missingMultiple(int* nums, int numsSize, int k) {
    bool found=false;
    // int j=INT_MIN,min=INT_MAX,n=1;
    // for(int i=0;i<numsSize;i++)
    // {
    //     if(nums[i]>j&&nums[i]%k==0)j=nums[i];
    //     // j++;
    // }
    // // j--;
    // int x=j/k;
    // // for(int i=0;i<numsSize;i++)
    // int i=1;
    // while(found==true)
    // {
    //     for(int j=0;j<numsSize;j++)
    //     {
    //         if(i*k==nums[j])found=true;
    //         i++;
    //     }
    // }
    // return k*(x+1);
    int y,j=1;
    while(1){
    y=j*k;
    found=false;
    for(int i=0;i<numsSize;i++)
    {
        if(y==nums[i]){found=true;
        // j++;
        // y=j*k;
        break;}
    }
    if(found==false)return y;
    j++;
    }
    // j--;
    // return j*k;
}
