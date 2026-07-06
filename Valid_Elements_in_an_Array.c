/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findValidElements(int* nums, int l, int* returnSize) {
    int max_right[l];
    int mx = nums[l-1];
    for(int i=0;i<l;i++){
        mx = fmax(mx,nums[l-i-1]);
        max_right[l-i-1] = mx;
    }
    int* ans = malloc(l*sizeof(int));
    *returnSize = 0;
    ans[(*returnSize)++] = nums[0];
    mx = nums[0];
    for(int i=1;i<l-1;i++){
        if (nums[i]>mx || nums[i]>max_right[i+1]) ans[(*returnSize)++] = nums[i];
        mx = fmax(mx,nums[i]);
    }
    if (l>1) ans[(*returnSize)++] = nums[l-1]; 
    return ans;
}
