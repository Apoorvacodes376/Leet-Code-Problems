int minOperations(char* s) {
    // int count=0;
    int n = strlen(s);
    // if(s[0]=='0')
    // {
    //     for(int i=0;i<n;i++)
    //     {
    //         if(i%2==0&&s[i]=='0')
    //             continue;
    //         else if(i%2!=0&&s[i]=='1')
    //             count++;
    //     }
    // }
    // else if(s[0]=='1')
    // {
    //     for(int i=0;i<n;i++)
    //     {
    //         if(i%2==0&& s[i]=='0')
    //             count++;
    //         else if(i%2!=0&& s[i]=='1')
    //             continue;
    //     }
    // }
    int count1 = 0;
    int count2 = 0;

    for(int i = 0; i < n; i++)
    {
        if((i % 2 == 0 && s[i] != '0') ||
           (i % 2 != 0 && s[i] != '1'))
        {
            count1++;
        }
        if((i % 2 == 0 && s[i] != '1') ||
           (i % 2 != 0 && s[i] != '0'))
        {
            count2++;
        }
    }
    int count=fmin(count1,count2);
    return count;
}
