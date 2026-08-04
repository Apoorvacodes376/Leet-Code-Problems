/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    int min=INT_MAX, max=INT_MIN;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]<min)min=nums[i];
        if(nums[i]>max)max=nums[i];
    }
    int *arr=(int*)malloc(100*sizeof(int));
    // *returnSize=(int*)arr;
    // qsort(,,numsSize,cmp)
    int x=0;
    for(int i=min+1;i<max;i++)
    {
        // if(nums[i]!=i&& i>min && i<max)
        // {
        //     arr[j]=i;
        //     j++;
        // }
        int found=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[j]==i)
            {
                found=1;
                break;
            }
        }
        if(!found)
        {
            arr[x]=i;
            x++;
        }
    }
    // int i=0;
    // while(i<max && i >min)
    // {
    //     for(int j=min;j<max;j++)
    //     {
    //         if(nums[j]!=nums[i])arr[i]=nums[j];
    //     }
    //     i++;
    // }
    *returnSize=x;
    return arr;
}
