class Solution {
    public int climbStairs(int n, int[] costs) {
        int dp[]=new int[n+1];
        dp[0]=0;
        for(int j=1;j<=n;j++)
        {
            dp[j]=Integer.MAX_VALUE;
            for(int i=1;i<=3;i++)
            {
                if(j-i>=0)
                // total=Math.min(total,costs[j]+Math.pow(j-i,2));
                dp[j]=Math.min(dp[j],dp[j-i]+costs[j-1]+i*i);
            }
        }
        // Arrays.sort(dp);
        return dp[n];
    }
}
