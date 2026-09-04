class Solution {
    public int firstStableIndex(int[] nums, int k) {
        int min=Integer.MAX_VALUE,max=Integer.MIN_VALUE;
        int []arr=new int[nums.length];
        for(int i=0;i<nums.length;i++)
        {
            min=Integer.MAX_VALUE;
            max=Integer.MIN_VALUE;
            for(int j=0;j<=i;j++)
            {
                if(nums[j]>max)
                {
                    max=nums[j];
                }
            }
            for(int j=i;j<nums.length;j++)
            {
                if(nums[j]<min)
                {
                    min=nums[j];
                }
            }
            arr[i]=max-min;
        }
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]<=k)return i;
        }
        return -1;
    }
}
