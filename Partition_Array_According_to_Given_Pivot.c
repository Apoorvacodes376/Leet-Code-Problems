    /**
    * Note: The returned array must be malloced, assume caller calls free().
    */
    int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
        int *ans=(int*)malloc(numsSize * sizeof(int));
        *returnSize=numsSize;
        int z=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[j]<pivot)
            {
                ans[z]=nums[j];
                z++;
            }
        }
        for(int j=0;j<numsSize;j++)
        {
            if(nums[j]==pivot)
            {
                ans[z]=nums[j];
                z++;
            }
        }
        for(int j=0;j<numsSize;j++)
        {
            if(nums[j]>pivot)
            {
                ans[z]=nums[j];
                z++;
            }
        }
        return ans;
    }
