/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* rearrangeArray(int* nums, int numsSize, int* returnSize) {
    int* ans = (int*)malloc(numsSize * sizeof(int));
    // if(numsSize%2!=0) return 0;
    // int cn=0,cp=0,temp=0;
    // for(int i=0;i<numsSize;i++)
    // {
    //     if(nums[i]<0)cn++;
    //     else cp++;
    // }
    // if(nums[0]<0){
    //             temp=nums[1];
    //             nums[1]=nums[0];
    //             nums[0]=temp;
    //         }
    // if(cp!=cn)return 0;
    //     for(int i=0;i<numsSize-1;i++)
    //     {
    //         ans[i]=nums[i];
    //         ans[i+1]=nums[i+1];
            
    //         if(ans[i]>0&&ans[i+1]<=0)
    //         {
    //             temp=ans[i];
    //             ans[i]=ans[i+1];
    //             ans[i+1]=temp;
    //         }
    //     }
    *returnSize = numsSize;
    // return nums
    // ;
    int pos[numsSize],neg[numsSize],p=0,n=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<0)
        {
            neg[n]=nums[i];
            n++;
        }
        else
        {
            pos[p]=nums[i];
            p++;
        }
    }
    p=0;
    n=0;
    for(int i=0;i<numsSize;i++)
    {
        if(i%2==0)
        {
            ans[i]=pos[p++];
        }
        else
        {
            ans[i]=neg[n++];
        }
    }
    return ans;
}
