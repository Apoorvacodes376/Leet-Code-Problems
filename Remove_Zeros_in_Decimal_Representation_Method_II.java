class Solution {
    public long removeZeros(long n) {
        int i=0;
        String ans="";
        while(n!=0)
        {
            long rem=n%10;
            if(rem!=0)
            {
                ans+=rem;
            }
            n/=10;
        }
        ans=new StringBuilder(ans).reverse().toString();
        return Long.parseLong(ans);
    }
}
