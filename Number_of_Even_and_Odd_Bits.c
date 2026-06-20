/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize) {
    int* arr=(int*)malloc(32*sizeof(int));
    // *returnSize=10;
    int x,i=0;
    while(n!=0)
    {
        x=n%2;
        arr[i]=x;
        n=n/2;
        i++;
    }
    int even=0,odd=0;
    for(int j=0;j<i;j++)
    {
        if(arr[j]==1){
            if(j%2==0)even++;
            else odd++;
        }
    }
    int *final=(int*)malloc(2*sizeof(int));
    *returnSize=2;
    final[0]=even;
    final[1]=odd;
    return final;
}
