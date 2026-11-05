class Solution {
    public int findTheDistanceValue(int[] arr1, int[] arr2, int d) {
        int count=0;
        for(int i=0;i<arr1.length;i++)
        {
            boolean found=true;
            for(int j=0;j<arr2.length;j++)
            {
                if(Math.abs(arr2[j]-arr1[i])<=d)
                {
                    found=false;
                    break;
                }
            }
            if(found)count++;
        }
        return count;
    }
}
