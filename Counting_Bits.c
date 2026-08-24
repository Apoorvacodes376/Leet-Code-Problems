/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int* ans = malloc((n + 1) * sizeof(int));
    for(int i=0;i<=n;i++)
    {
        int count=0;
        int x=i;
        while(x>0)
        {
            if(x%2==1)count++;
            x=x/2;
        }
        ans[i]=count;
    }
    *returnSize=n+1;
    return ans;
}
