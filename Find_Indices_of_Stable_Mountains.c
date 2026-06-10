/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stableMountains(int* height, int heightSize, int threshold, int* returnSize) {
    int* ans=(int*)malloc(heightSize* sizeof(int ));
    int j,k=0;
    for(j=0;j<heightSize-1;j++)
    {
        if(height[j]>threshold)k++;
    }
    *returnSize=k;
    j=0;
    for(int i=1;i<heightSize;i++)
    {
        if(height[i-1]>threshold)ans[j++]=i;
    }
    return ans;
}
