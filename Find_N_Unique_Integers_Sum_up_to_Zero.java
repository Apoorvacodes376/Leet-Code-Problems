class Solution {
    public int[] sumZero(int n) {
        int div=n/2,j=0;
        int [] arr=new int [n];
        if(n%2!=0)
        {
            for(int i=-div;i<=div;i++)
            {
                arr[j++]=i;
            }
        }
        if(n%2==0)
        {
            for(int i=-div;i<=div;i++)
            {
                if(i!=0)
                {
                    arr[j++]=i;
                }
                else continue;
            }
        }
        return arr;
    }
}
