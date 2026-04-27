char* removeDuplicateLetters(char* s) {
    int n=strlen(s);
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=1+i;j<n;j++)
    //     {
    //         if(s[i]==s[j])
    //         {
    //             for(int k=j;k<n;k++)
    //             {
    //                 s[k]=s[k+1];
    //                 n--;
    //                 j--;
    //             }
    //         }
    //     }
    // }
    for(int i=n-1;i>0;i--)
    {
        for(int j=n;j>i+1;j--)
        {
            if(s[i]==s[j])
            {
                for(int k=n;k>j;k--)
                {
                    s[k+1]=s[k];
                    n--;
                    j--;
                }
            }
        }
    }
    // for(int i=0;i<n-1;i++)
    // {
    //     for (int j=i+1;j<n;j++)
    //     {
    //         if(s[i]>s[j])
    //         {
    //             char temp=s[i];
    //             s[i]=s[j];
    //             s[j]=temp;
    //         }
    //     }
    // }
    // for(int i = 0; i < n; i++) {
    //     s[i] = s[n - i - 1];
    // }
    // s[n] = '\0';
    s[n]='\0';
    return s;
}
