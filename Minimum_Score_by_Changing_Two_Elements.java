class Solution {
    public int minimizeSum(int[] nums) {
        Arrays.sort(nums);
        // int min=Math.abs(nums[0]-nums[1]);
        // int max=Math.abs(nums[nums.length-1]-nums[nums.length-2]);
        // int min=Integer.MAX_VALUE;
        // int max=Integer.MAX_VALUE;
        // for(int i=0;i<nums.length-1;i++)
        // {
        //     min=Math.min(min,Math.abs(nums[i]-nums[i+1]));
        //     max=Math.max(max,Math.abs(nums[i]-nums[i+1]));
        // }
        int l=nums.length;
        // min=Math.min(min,Math.abs(nums[l-1]-nums[l-2]));
        // min=Math.min(min,Math.abs(nums[0]-nums[1]));
        // min=Math.min(min,Math.abs(nums[1]-nums[l-2]));
        int c1=Math.abs(nums[l-1]-nums[2]);
        int c2=Math.abs(nums[l-2]-nums[1]);
        int c3=Math.abs(nums[l-3]-nums[0]);
        return Math.min(c1,Math.min(c2,c3));
    }
}
