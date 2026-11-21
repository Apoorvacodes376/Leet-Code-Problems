class Solution {
    int setbit(int x)
    {
        int c=0;
        while(x!=0)
        {
            int rem=x%2;
            if(rem==1)
            {
                c++;
            }
            x/=2;
        }
        return c;
    }
    public int calculateScore(int a, int b) {
        int s1=setbit(a);
        int s2=setbit(b);
        if(s1>=s2)return s1*s2;
        return s2/s1;
    }
}
