double trimMean(int* arr, int arrSize) {
    int fp=arrSize* 5/100,l=arrSize-fp,sum=0;
    for(int i=0;i<arrSize;i++)
    {
        for(int j=0;j<arrSize-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=fp;i<l;i++)
    {
        sum+=arr[i];
    }
    return (double)sum/(arrSize-2*fp);
}
