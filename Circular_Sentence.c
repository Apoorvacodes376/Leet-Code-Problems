bool isCircularSentence(char* sentence) {
    int l=strlen(sentence);
    for(int i=1;i<l-1;i++)
    {
        if(sentence[i]==' ')
        {
            if(sentence[i-1]!=sentence[i+1]) return false;
        }
    }
    if(sentence[0]==sentence[l-1])return true;
    return false;
}
