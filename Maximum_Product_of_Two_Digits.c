int maxProduct(int n) {
    int arr[10],i=0;
    while(n!=0)
    {
        int rem=n%10;
        arr[i]=rem;
        n/=10;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        for(int k=0;k<i-1;k++)
        {
            if(arr[k]<arr[k+1])
            {
                int temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
    return arr[0]*arr[1];
}
