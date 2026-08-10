char * defangIPaddr(char * address){
    int l=strlen(address),n=l;
    for(int i=0;i<l;i++)
    {
        if(address[i]=='.')
        {
            n+=2;
        }
    }
    int i=0,j=0;
    // char newa[n];
    char *newa = (char *)malloc((n + 1) * sizeof(char));
    while(address[i]!='\0')
    {
        if(address[i]=='.')
        {
            newa[j++]='[';
            newa[j++]='.';
            newa[j++]=']';
        }
        else
        newa[j++]=address[i];
        i++;
    }
    newa[j]='\0';
    address=newa;
    return address;
}
