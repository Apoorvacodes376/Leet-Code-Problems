class Solution {
    boolean row(char[][] b,int x)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=i+1;j<9;j++)
            if(b[x][i]!='.'&&b[x][i]==b[x][j])return false;
        }
        return true;
    }
    boolean col(char[][] b,int x)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=i+1;j<9;j++)
            if(b[i][x]!='.'&&b[i][x]==b[j][x])return false;
        }
        return true;
    }
    boolean box(char[][]b,int x, int y)
    {
        int startRow = (x / 3) * 3;
    int startCol = (y / 3) * 3;

    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            if ((i != x || j != y) &&
                b[i][j] != '.' && b[i][j] == b[x][y]) {
                return false;
            }
        }
    }
    return true;
        // if(x<=2&&y<=2)
        // for(int i=0;i<3;i++)
        // {
        //     for(int j=0;i<3;j++)
        //     {
        //         if((i!=x&&j!=y)&&(b[x][y]==b[i][j]))return false;
        //     }
        // }
        // else if(x<=5&&y<=5)
        // for(int i=0;i<3;i++)
        // {
        //     for(int j=0;i<3;j++)
        //     {
        //         if((i!=x&&j!=y)&&(b[x][y]==b[i][j]))return false;
        //     }
        // }
        // else if(x<=8&&y<=8)
        // for(int i=0;i<3;i++)
        // {
        //     for(int j=0;i<3;j++)
        //     {
        //         if((i!=x&&j!=y)&&(b[x][y]==b[i][j]))return false;
        //     }
        // }
        // else if(x<=2&&y<=8)
        // for(int i=0;i<3;i++)
        // {
        //     for(int j=0;i<3;j++)
        //     {
        //         if((i!=x&&j!=y)&&(b[x][y]==b[i][j]))return false;
        //     }
        // }
        // else if(x<=8&&y<=2)
        // for(int i=0;i<3;i++)
        // {
        //     for(int j=0;i<3;j++)
        //     {
        //         if((i!=x&&j!=y)&&(b[x][y]==b[i][j]))return false;
        //     }
        // }
        // else if(x<=5&&y<=2)
        // for(int i=0;i<3;i++)
        // {
        //     for(int j=0;i<3;j++)
        //     {
        //         if((i!=x&&j!=y)&&(b[x][y]==b[i][j]))return false;
        //     }
        // }
        // else if(x<=2&&y<=5)
        // for(int i=0;i<3;i++)
        // {
        //     for(int j=0;i<3;j++)
        //     {
        //         if((i!=x&&j!=y)&&(b[x][y]==b[i][j]))return false;
        //     }
        // }
        // else if(x<=5&&y<=8)
        // for(int i=0;i<3;i++)
        // {
        //     for(int j=0;i<3;j++)
        //     {
        //         if((i!=x&&j!=y)&&(b[x][y]==b[i][j]))return false;
        //     }
        // }
        // else if(x<=8&&y<=5)
        // for(int i=0;i<3;i++)
        // {
        //     for(int j=0;i<3;j++)
        //     {
        //         if((i!=x&&j!=y)&&(b[x][y]==b[i][j]))return false;
        //     }
        // }
        // return true;
        // row(b,x);
        // col(b,y);
    }
    public boolean isValidSudoku(char[][] board) {
        for(int i=0;i<9;i++)
        {
            // for(int j=0;j<9;j++)
            // {
                if(!row(board,i))return false;
                if(!col(board,i))return false;
            // }
        }
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(!box(board,i,j))return false;
                }
            }
        }
        return true;
    }
}
