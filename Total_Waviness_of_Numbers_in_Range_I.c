int totalWaviness(int num1, int num2) {
    int x=num2-num1;
    int arr[x+1];
    int j=0;
    for(int i=num1;i<=num2;i++)
    {
        arr[j]=i;
        j++;
    }
    int y=j,k=0,rem=00;
    int arr2[10];
    int count=0;
    for(int j=0;j<y;j++)
    {
        k=0;
        int temp=arr[j];
        while(temp!=0)
        {
            rem=temp%10;
            arr2[k]=rem;
            temp/=10;
            k++;
        }
        int z=k-1;
        for(int a=1;a<k-1;a++)
        {
            if(arr2[a]<arr2[a-1]&&arr2[a]<arr2[a+1])count++;
            else if(arr2[a]>arr2[a-1]&&arr2[a]>arr2[a+1])count++;
        }
    }
    return count;
}
