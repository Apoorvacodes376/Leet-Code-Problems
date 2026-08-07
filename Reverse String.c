void reverseString(char* s, int sSize) {
    // for(int i=sSize-1;i>=0;i--)
    // {
    //     s[i]=s[sSize-1-i];
    // }
    for(int i=0;i<sSize/2;i++)
    {
        // s[i]=s[sSize-i-1];
        char temp=s[i];
        s[i]=s[sSize-i-1];
        s[sSize-i-1]=temp;
    }
    // int i=0;
    // while(s[i]!='\0')
    // {
    //     s[sSize-i-1]=s[i];
    //     i++;
    // }
    // return s;
}
