int numSpecial(int** mat, int matSize, int* matColSize) {
    int rc[matSize],cc[matColSize[0]];
    // for(int i=0;i<matSize/matColSize;i++)
    // {
    //     int j=0;
    //     while(j!=matColSize)
    //     {
    //         if(mat[i][j]!=0){
    //             count1++;
    //             if(count1==matColSize-1)count2++;
    //         }
    //         j++;
    //     }
    //     count1=0;
    //     while(k!=ma)
    // }
    for(int i=0;i<matSize;i++) rc[i]=0;
    for(int j=0;j<matColSize[0];j++) cc[j]=0;
    for(int i=0;i<matSize;i++)
    {
        for(int j=0;j<matColSize[0];j++)
        {
            if(mat[i][j]==1)
            {
                rc[i]++;
                cc[j]++;
            }
        }
    }
    int ans=0;
    for(int i=0;i<matSize;i++)
    {
        for(int j=0;j<matColSize[0];j++)
        {
            if(mat[i][j]==1 && rc[i]==1 &&cc[j]==1)
            {
                ans++;
            }
        }
    }
    return ans;
}
