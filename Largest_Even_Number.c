char* largestEven(char* s) {
    bool found=false;
    int l=strlen(s),x=-1;
    if(s[l-1]=='2')return s;
    for(int i=l-1;i>=0;i--)
    {
        if(s[i]=='2')
        {
            x=i;
            break;
        }
    }
    char* c = malloc((x + 2) * sizeof(char));
    for(int i=0;i<=x;i++)
    {
        c[i]=s[i];
    }
    c[x+1]='\0';
    return c;
}
