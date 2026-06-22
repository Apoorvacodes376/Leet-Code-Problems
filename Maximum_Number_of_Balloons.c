int maxNumberOfBalloons(char* text) {
    int b=0,a=0,l=0,o=0,n=0;
    for(int i=0;i<strlen(text);i++)
    {
        char x=text[i];
        switch(x){
            case 'b':
            {
                b++;
                break;
            }
            case 'a':
            {
                a++;
                break;
            }
            case 'l':
            {
                l++;
                break;
            }
            case 'o':
            {
                o++;
                break;
            }
            case 'n':
            {
                n++;
                break;
            }
        }
    }
    int c=fmin(fmin(b,a),fmin(l/2,fmin(o/2,n)));
    return c;
}
