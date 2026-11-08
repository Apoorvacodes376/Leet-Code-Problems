class Solution {
    public long removeZeros(long n) {
        int i=0;
        String str="";
        while(n!=0)
        {
            long rem=n%10;
            str+=rem;
            n/=10;
        }
        String ans="";
        while(i!=str.length())
        {
            char c=str.charAt(i);
            if(c!='0')
            {
                ans+=c;
            }
            i++;
        }
        ans=new StringBuilder(ans).reverse().toString();
        return Long.parseLong(ans);
    }
}
