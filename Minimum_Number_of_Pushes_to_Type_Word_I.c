int minimumPushes(char* word) {
    int l=strlen(word);
    int count=0;
    if(l<8)return l;
    // else if(l>8)
    // {
    //     if(l%8==0)
    //     {
    //         int rem=l/8;
    //         count=rem*l;
    //     }
    //     else
    //     {
    //         int rem=l%8;
    //         count=rem+l;
    //     }
    // }
    int push=1;
    for(int i=0;i<l;i++)
    {
        if(i<8)
        {
            count++;
        }
        else if(i<16)
        {
            count+=2;
        }
        else if(i<24)
        {
            count+=3;
        }
        else count+=4;
    }
    return count;
}
