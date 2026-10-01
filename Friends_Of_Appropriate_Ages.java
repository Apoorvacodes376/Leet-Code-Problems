class Solution {
    public int numFriendRequests(int[] ages) {
        int count=0;
        int[] freq=new int[121];
        for(int age:ages)
        {
            freq[age]++;
        }
        for(int  i=1;i<=120;i++)
        {
            for(int  j=1;j<=120;j++)
            {
                if((j>0.5*i+7)&&(j<=i)&&(j<=100||i>=100))
                {
                    count+=freq[i]*freq[j];
                if(i==j)
                {
                    count-=freq[i];
                }}
            }
        }
        return count;
    }
}
