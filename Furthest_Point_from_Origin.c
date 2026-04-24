int furthestDistanceFromOrigin(char* moves) {
    int count=strlen(moves),dist=0,countleft=0,countright=0;
    for(int i=0;i<count;i++)
    {
        if(moves[i]=='L')countleft++;
        else if(moves[i]=='R')countright++;
    }
    for(int i=0;i<count;i++)
    {
        if(countright>countleft)
        {
            if(moves[i]=='_') moves[i]='R';
        }
        else
        {
            if(moves[i]=='_') moves[i]='L';
        }
    }
    for(int i=0;i<count;i++)
    {
        if(moves[i]=='L') dist--;
        else dist++;
    }
    if(dist<0) return dist-2*dist;
    else
    return dist;
}
