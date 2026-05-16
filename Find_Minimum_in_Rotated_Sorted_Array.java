class Solution {
    public int findMin(int[] nums) {
        int temp=nums[0];
        for(int i=0;i<nums.length;i++)
        if (temp>nums[i])
        {
            return nums[i];
        }
        return nums[0];
    }
}
