class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int mi=10000;
        int rem=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            while(nums[i]!=0)
            {
                rem=nums[i]%10;
                sum+=rem;
                nums[i]/=10;
            }
            nums[i]=sum;
            if(mi>nums[i])mi=nums[i];
        }
        return mi;
    }
};
