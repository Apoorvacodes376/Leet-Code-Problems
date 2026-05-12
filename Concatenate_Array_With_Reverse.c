/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    int n=numsSize*2;
    *returnSize=n;
    // int arr[n];
    int* arr = (int*)malloc(n * sizeof(int));
    int i;
    for(i=0;i<numsSize;i++)
    {
        arr[i]=nums[i];
        
    }
    for(int j=numsSize,i=numsSize-1;j<n,i>=0;j++,i--)
        {
            arr[j]=nums[i];
        }
    // for(int j=i+1,i=numsSize;j<numsSize;j++,i--)
    // {
    //     arr[j]=nums[i];
    // }
    return arr;
}
