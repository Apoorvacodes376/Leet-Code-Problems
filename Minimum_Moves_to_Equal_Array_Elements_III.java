class Solution {
    public int minMoves(int[] nums) {
        int count=0;
        int l=nums.length;
        Arrays.sort(nums);
        for(int i=0;i<l;i++)
        {
            count+=Math.abs(nums[i]-nums[l-1]);
        }
        return count;
    }
}
