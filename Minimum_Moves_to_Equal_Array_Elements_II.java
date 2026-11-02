class Solution {
    public int minMoves2(int[] nums) {
        Arrays.sort(nums);
        int l=nums.length;
        int count=0;
        if(l%2!=0)
        {
            int med=nums[l/2];
            for(int i=0;i<l;i++)
            {
                // if(nums[i]<med)
                // {
                //     while(nums[i]!=med)
                //     {
                //         nums[i]++;
                //         count++;
                //     }
                // }
                // else
                // {
                //     while(nums[i]!=med)
                //     {
                //         nums[i]--;
                //         count++;
                //     }
                // }
                count+=Math.abs(nums[i]-med);
            }
        }
        else
        {
            int med=(nums[(l/2)-1]+nums[(l/2)])/2;
            for(int i=0;i<l;i++)
            {
                // if(nums[i]<med)
                // {
                //     while(nums[i]!=med)
                //     {
                //         nums[i]++;
                //         count++;
                //     }
                // }
                // else
                // {
                //     while(nums[i]!=med)
                //     {
                //         nums[i]--;
                //         count++;
                //     }
                // }
                count+=Math.abs(nums[i]-med);
            }
        }
        return count;
    }
}
