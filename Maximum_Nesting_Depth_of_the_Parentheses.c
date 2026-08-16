int maxDepth(char* s) {
    int i=0,count=0,max=0;
    while(s[i]!='\0')
    {
        if(s[i]=='(')
        {
            count++;
            if(count>max)max=count;
        }
        else if(s[i]==')')
        {
            count--;
        }
        i++;
    }
    return max;
}
