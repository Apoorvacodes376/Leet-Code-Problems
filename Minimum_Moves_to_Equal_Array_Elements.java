class Solution {
    int[] increment(int[] nums,int x)
    {
        for(int i=0;i<nums.length-2;i++)
        {
            nums[i]+=x;
        }
        return nums;
    }
    // int max(int nums)
    // {
    //     for
    // }
    boolean equals(int[]nums)
    {
        int l=nums.length;
        for(int i=0;i<l-1;i++)
        {
            if(nums[i]!=nums[i+1])return false;
        }
        return true;
    }
    public int minMoves(int[] nums) {
        Arrays.sort(nums);
        int l=nums.length;
        int count=0;
        for(int i=0;i<l;i++)
        {
            // if(equals(nums))break;
            // int max=max(nums);
            // Arrays.sort(nums);
            // increment(nums,nums[l-1]);
            // count+=(nums[l-1]-nums[i]);
            // count+=nums[l-1];
            if(nums[i]>nums[0])
            {
                count+=nums[i]-nums[0];
            }
        }
        return count;
    }
}
