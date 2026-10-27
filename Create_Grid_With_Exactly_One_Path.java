class Solution {
    public String[] createGrid(int m, int n) {
        String str[]=new String[m];
        for(int i=0;i<m;i++)
        {
            str[i]="";
            for(int j=0;j<n;j++)
            {
                if(i==0||j==n-1)
                {
                    str[i]+=".";
                }
                else 
                {
                    str[i]+="#";
                }
            }
        }
        return str;
    }
}
