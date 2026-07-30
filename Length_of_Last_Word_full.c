int lengthOfLastWord(char* s) {
    // int l=strlen(s);
    // int i=l-1;
    // while(i>=0 &&s[i]==' ')
    // {
    //     i--;
    // }
    // int count=0;
    // while(i>=0&& s[i]!=' ')
    // {
    //     count++;
    //     i--;
    // }
    // return count;
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
