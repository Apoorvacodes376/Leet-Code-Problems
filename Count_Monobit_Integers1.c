int countMonobit(int n) {
    if (n==0) return 1;
    int count=1;
    for(int i=2;i<=1+n;i*=2)
    {
        // if(i==pow(2,n)-1)count++;
        count++;
    }
    return count;
}
