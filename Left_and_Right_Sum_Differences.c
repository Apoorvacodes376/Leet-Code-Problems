/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int* ans1= (int*)malloc(numsSize * sizeof(int));
    int* left= (int*)malloc(numsSize * sizeof(int));
    int* ans= (int*)malloc(numsSize* sizeof(int));
    int* ans2= (int*)malloc(numsSize * sizeof(int));
    *returnSize= numsSize;
    int ls=0,rs=0,count=0;;
    // for(int i=0;i<numsSize;i++)
    // {
    //     ans1[i]=count;
    //     count+=nums[i];
    // }
    // int mid;
    // for(int i=0;i<numsSize;i++)
    // {
    //     mid=nums[i];
    //     for(int j=0;j<mid;j++)
    //     {
    //         ls+=nums[j];
    //         left[i]=ls;
    //     }
    //     for(int k=0;k<mid+1;k++)
    //     {
    //         rs=nums[k];
    //         right[i]=rs;
    //     }
    //     for(int x=0;x<numsSize;x++)
    //     {
    //         ans2[i]=left[i]-right[i];
    //     }
    // }
    // // for(int i=0;i<numsSize;i++)
    // // {}
    // return ans2;
    for(int i=0;i<numsSize;i++)
    {
        ans1[i]=ls;
        ls+=nums[i];
    }
    for(int i=0;i<numsSize;i++)
    {
        ans2[numsSize-1-i]=rs;
        rs+=nums[numsSize-1-i];
    }
    for(int i=0;i<numsSize;i++)
    {
        ans[i]=abs(ans1[i]-ans2[i]);
    }
    return ans;
}
