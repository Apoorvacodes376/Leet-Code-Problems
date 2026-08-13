int removePalindromeSub(char* s) {
    // int count=0;
    int l=strlen(s);
    // char str[l];
    // for(int i=0;i<l;i++)
    // {
    //     str[i]=s[i-l];
    // }
    for(int i=0;i<l/2;i++)
    {
        // for(int j=i+1;j<l;j++)
        // {
            if(s[l-i-1]!=s[i])return 2;
        // }
    }
    return 1;
}
