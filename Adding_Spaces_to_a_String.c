char* addSpaces(char* s, int* spaces, int spacesSize) {
    int l=strlen(s);
    char *string=(char*)malloc((l+1+spacesSize)*sizeof(char));
    int j=0,i=0,k=0;
    while(i<l)
    {
        if(k<spacesSize&&i==spaces[k])
        {
            string[j++]=' ';
            k++;
        }
        string[j++]=s[i++];
    }
    string[j]='\0';
    return string;
}
