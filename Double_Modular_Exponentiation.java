class Solution {
    long pow(int a,int b,long mod)
    {
        long pow=1;
        a%=mod;
        for(int i=0;i<b;i++)
        {
            pow=(pow*a)%mod;
        }
        return pow;
    }
    public List<Integer> getGoodIndices(int[][] variables, int target) {
        List<Integer>ans= new ArrayList<>();
        int arr;
        int rows=variables.length;
        for(int i=0;i<rows;i++)
        {
            arr=(int)pow((int)pow(variables[i][0],variables[i][1],10),variables[i][2],variables[i][3]);
            if(arr==target) ans.add(i);
        }
        return ans;
    }
}
