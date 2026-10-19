class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        for(int i=0;i<nums.length;i++)
        {
            for(int j=0;j<nums.length;j++)
            {
                if(nums[i]<nums[j])
                {
                    int tem=nums[i];
                    nums[i]=nums[j];
                    nums[j]=tem;
                }
            }
        }
        List<Integer> ans=new ArrayList<>();
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]==target)
            {
                ans.add(i);
            }
        }
        return ans;
    }
}
