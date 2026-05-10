int countSegments(char* s) {
    int count=1;
    int l=strlen(s);
    if(l==0)return 0;
    if(l==1&&s[l-1]!=' ')return 1;
    int flag=0;
    for(int i=1;i<l;i++)
    {
        if(s[i]==' '&&s[i-1]!=' ')
            count++;
        if(s[i]!=' ')
            flag=1;
        // if(s[i]==' ' && s[i+1]==' '&& s[i+2]==' ')
        //     count-=3;
    }
    if (s[l-1]==' ') count--;
    if(flag==0) return 0;
    return count;
}
