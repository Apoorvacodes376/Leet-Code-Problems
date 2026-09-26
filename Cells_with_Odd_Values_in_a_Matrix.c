int oddCells(int m, int n, int** indices, int indicesSize, int* indicesColSize) {
    int count=0,mat[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[i][j]=0;
        }
    }
    for(int i=0;i<indicesSize;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[indices[i][0]][j]+=1;
        }
        for(int j=0;j<m;j++)
        {
            mat[j][indices[i][1]]+=1;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]%2!=0)count++;
        }
    }
    return count;
}
