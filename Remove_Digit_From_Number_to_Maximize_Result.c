char* removeDigit(char* number, char digit) {
    int x=0,i=0;
    // bool found=false;
    // char newstr[100];
    char* newstr = malloc(strlen(number));
    // while(!found)
    // {
    //     if(number[i]==digit)
    //     {
    //         found=true;
    //     }
    //     i++;
    // }
    int remove=0,len=strlen(number);
    for(int i=0;i<strlen(number);i++)
    {
        if(number[i]==digit)
        {
            // i++;
            // continue;
            remove=i;
            if(i+1<len&&number[i]<number[i+1])break;
        }
        // else
        // {
            newstr[x++]=number[i];
        // }
    }
    x=0;
    for (int i = 0; i < len; i++) {
        if (i == remove)
            continue;

        newstr[x++] = number[i];
    }
    newstr[x]='\0';
    return newstr;
}
