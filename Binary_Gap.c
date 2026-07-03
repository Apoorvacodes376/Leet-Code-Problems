int binaryGap(int n) {
    int rem=0,count=0,max=0;
    while(n>0)
    {
        rem=n%2;
        if(rem==0 )
        {
            if(count>0)count++;
            // if(max<count) max=count;
            max=fmax(max,count);
        }
        else{
            max=fmax(max,count);
            count=1;
        }
        n=n/2;
    }
    return max;
}
