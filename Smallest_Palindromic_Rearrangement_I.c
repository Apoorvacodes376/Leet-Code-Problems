int cmp(const void *a,const void *b)
{
    // const char *stra=*(const char **)a;
    // const char *strb=*(const char **)b;
    // return strcmp(stra,strb);
    return (*(char *)a-*(char *)b);
}

char* smallestPalindrome(char* s) {
    int l=strlen(s),j=0;
    if(l<2)return s;
    char ns[((l+1)/2)+1];
    // qsort(s,l,sizeof(char ),cmp);
    // for(int i=0;i<l;i+=2)
    // {
    //     ns[j]=s[i];
    //     j++;
    // }
    qsort(s,l/2,sizeof(char ),cmp);
    for(int i=0;i<l/2;i++)
    {
        ns[j++]=s[i];
        // j++;
    }
    if(l%2)ns[j++]=s[l/2];
    ns[j]='\0';
    char rev[l+1];
    // rev=strrev(ns);
    // fs=strcat(ns,rev);
    int start = (l % 2) ? j - 2 : j - 1;
    int x = 0;
    for(int k=start;k>=0;k--)
    {
        rev[x++]=ns[k];
    }
    rev[x]='\0';
    char *fs=(char *)malloc(strlen(ns)+strlen(rev)+1);
    strcpy(fs,ns);
    strcat(fs,rev); 
    return fs;
}
