int kthFactor(int n, int k) {
    int arr[n],j=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            arr[j++]=i;
        }
    }
    if(j<k)return -1;
    int sol=arr[k-1];
    return sol;
}
