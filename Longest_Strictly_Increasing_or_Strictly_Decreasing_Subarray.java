class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int ci = 1, cd = 1, in = 1, de = 1;
        for (int i = 0; i < nums.length - 1; i++) {
            int j = i + 1;
            if (nums[i] < nums[j]) {
                ci++;
                cd = 1;
            } else if (nums[i] > nums[j]) {
                cd++;
                ci = 1;
            } else {
                ci = 1;
                cd = 1;
            }
            de = Math.max(cd, de);
            in = Math.max(ci, in);
        }
        return Math.max(de, in);
    }
}
