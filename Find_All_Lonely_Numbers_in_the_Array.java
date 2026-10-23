class Solution {
    public List<Integer> findLonely(int[] nums) {
        Arrays.sort(nums);
        List<Integer> ans = new ArrayList<>();
        int l = nums.length;
        // for(int i=0;i<l;i++)
        int i = 0;
        while (i != l) {
            //     if(i!=0&&i!=l-1&&nums[i]==nums[i+1]){i++; continue;}
            //     if((i>0&&(nums[i-1]+1==nums[i]))){i++;continue;}
            //     if((i==0&&nums[1]-1==nums[0])){i++;continue;}
            //     if(i<l-1&&nums[i]+1==nums[i-1])
            //     {
            //         i++;
            //         continue;
            //     }
            //     ans.add(nums[i]);
            //     i++;
            // }
            if (i > 0 && nums[i] == nums[i - 1]) {
                i++;
                continue;
            }
            if (i < l - 1 && nums[i] == nums[i + 1]) {
                i++;
                continue;
            }
            if (i > 0 && nums[i - 1] + 1 == nums[i]) {
                i++;
                continue;
            }
            if (i < l - 1 && nums[i] + 1 == nums[i + 1]) {
                i++;
                continue;
            }
            ans.add(nums[i]);
            i++;
        }
        return ans;
    }
}
