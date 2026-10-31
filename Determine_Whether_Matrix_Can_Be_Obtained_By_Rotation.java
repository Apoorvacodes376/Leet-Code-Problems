class Solution {
    int[][] rotate(int[][]mat)
    {
        int ans[][]=new int[mat.length][mat.length];
        for(int i=0;i<mat.length;i++)
        {
            for(int j=0;j<mat[0].length;j++)
            {
                ans[mat.length-1-j][i]=mat[i][j];
            }
        }
        return ans;
    }
    boolean compare(int[][]mat,int[][]t)
    {
        for(int i=0;i<mat.length;i++)
        {
            for(int j=0;j<mat[0].length;j++)
            {
                if(mat[i][j]!=t[i][j])return false;
            }
        }
        return true;
    }
    public boolean findRotation(int[][] mat, int[][] target) {
        for(int i=0;i<4;i++)
        {
            mat=rotate(mat);
            if(compare(mat,target))return true;
        }
        return false;
    }
}
