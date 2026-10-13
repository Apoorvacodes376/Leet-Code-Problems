class Solution {
    public long maxAlternatingSum(int[] nums) {
        int l=nums.length;
        for(int i=0;i<l;i++)
        {
            if(nums[i]<0)
            {
                nums[i]=-nums[i];
            }
        }
        Arrays.sort(nums);
        long sum=0;
        int div=l/2;
        for(int i=div;i<l;i++)
        {
            sum+=Math.pow(nums[i],2);
        }
        for(int i=0;i<div;i++)
        {
            sum-=Math.pow(nums[i],2);
        }
        return sum;
    }
}
