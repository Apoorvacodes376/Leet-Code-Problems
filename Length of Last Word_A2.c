int lengthOfLastWord(char* s) {
    int count=0,l=strlen(s);
    int i=l-1;
    // while(true)
    // {
    //     if(i>0&&s[i]!=' ')
    //     {
    //         count++;
    //         if(s[i-1]==' ')
    //         {
    //             count++;
    //             break;
    //         }
    //     }
    //     i--;
    // }
    while(i>=0)
    {
        if(s[i]!=' ')
        {
            count++;;
        }
        else if(count>0)
        {
            break;
        }
        i--;
    }
    return count;
}
