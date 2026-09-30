class Solution {
    public int[] maxDepthAfterSplit(String seq) {
        int count=0;
        int ans[]=new int[seq.length()];
        for(int i=0;i<seq.length();i++)
        {
            char c=seq.charAt(i);
            if(c=='(')
            {
                count++;
                ans[i]=count%2;
            }
            else
            {
                // count--;
                ans[i]=count%2;
                count--;
            }
        }
        return ans;
    }
}
