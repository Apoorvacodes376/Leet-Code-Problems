class Solution {
public:
    int search(vector<int>& nums, int target) {
        int numsSize=nums.size();
        for(int i = 0; i < numsSize; i++)
    {
        if(nums[i]==target)return i;
    }
    return -1;
    }
};
