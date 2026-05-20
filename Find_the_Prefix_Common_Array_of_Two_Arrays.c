/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    int *ans=(int*) malloc(ASize*sizeof(int));
    *returnSize=ASize;
    int count=0;
    int *freq=(int*) calloc((ASize+1),sizeof(int));
    for(int i=0;i<ASize;i++)
    {
        freq[A[i]]++;
        if(freq[A[i]]==2)count++;
        freq[B[i]]++;
        if(freq[B[i]]==2)count++;
        ans[i]=count;
    }
    // ans[0]=0;
    return ans;
}
