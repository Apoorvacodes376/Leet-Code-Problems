class Solution {
    public int reverseDegree(String s) {
        int l=s.length();
        int pro[]=new int[l];
        int val[]=new int[l];
        int j=0,sum=0;
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            val[i]='z'-c+1;
        }
        for(int i=1;i<=l;i++)
        {
            sum+=i*val[j];
            j++;
        }
        return sum;
    }
}
