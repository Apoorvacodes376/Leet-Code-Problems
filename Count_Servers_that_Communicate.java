class Solution {
    boolean row(int[][]grid,int x,int y)
    {
        // if(grid[i])
        for(int i=0;i<grid[0].length;i++)
        {
            if(i!=y&&grid[x][i]==1)return true;
            // for(int j=0;j<c;j++)
            // {
            //     if()
            // }
        }
        return false;
    }
    boolean col(int[][]grid,int x,int y)
    {
        // if(grid[i])
        for(int i=0;i<grid.length;i++)
        {
            if(i!=x&&grid[i][y]==1)return true;
            // for(int j=0;j<c;j++)
            // {
            //     if()
            // }
        }
        return false;
    }
    public int countServers(int[][] grid) {
        int m=grid.length;
        int n=grid[0].length;
        int count=0;
        int x=0,y=0;
        int j=0;
        for(int i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                // if(grid[x][j]==1||grid[i][y]==1)count+=2;
                if(grid[i][j]==1)
                if(row(grid,i,j)||col(grid,i,j))count++;
            }
            x++;
            y++;
        }
        return count;
    }
}
