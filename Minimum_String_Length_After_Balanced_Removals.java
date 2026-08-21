class Solution {
    public int minLengthAfterRemovals(String s) {
        int counta=0,countb=0,l=s.length();
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            if(c=='a')counta++;
            else countb++;
        }
        if(counta==0||countb==0)return l;
        return Math.abs(counta-countb);
    }
}
