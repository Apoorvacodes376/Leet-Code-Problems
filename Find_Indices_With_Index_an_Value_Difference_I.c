/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIndices(int* nums, int numsSize, int indexDifference, int valueDifference, int* returnSize) {
    int *ans = (int *)malloc(2 * sizeof(int));
    *returnSize=2;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<numsSize;j++)
        {
            if(abs(i-j)>=indexDifference && abs(nums[i]-nums[j])>=valueDifference)
            {
                ans[0]=i;
                ans[1]=j;
                return ans;
            }
            else
            {
                ans[0]=-1;
                ans[1]=-1;
            }
        }
    }
    return ans;
}
