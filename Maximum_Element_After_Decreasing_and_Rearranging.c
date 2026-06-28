int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int maximumElementAfterDecrementingAndRearranging(int* arr, int arrSize) {
    int min=INT_MAX,max=INT_MIN;
    // for(long long i=0;i<arrSize;i++)
    // {
    //     if(min>arr[i])min=arr[i];
    //     // if(max<arr[i])max=arr[i];
    //     for(long long j=0;j<arrSize-i-1;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             long long temp=arr[j];
    //             arr[j]=arr[j+1];
    //             arr[j+1]=temp;
    //         }
    //     }
    // }
    qsort(arr, arrSize, sizeof(int),cmp);
    arr[0]=1;
    for(long long i=1;i<arrSize;i++)
    {
        if(arr[i] > arr[i - 1]+ 1)arr[i]=arr[i-1]+1;
        if(max<arr[i])max=arr[i];
    }
    // return fmin(arrSize,max);
    return arr[arrSize-1];
}
