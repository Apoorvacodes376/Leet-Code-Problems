int minPartitions(char* n) {
    int l=strlen(n), N[l],m=0;
    for(int i=0;i<l;i++)
    {
        N[i]=n[i]-'0';
        if(m<N[i])m=N[i];
    }
    return m;
}
