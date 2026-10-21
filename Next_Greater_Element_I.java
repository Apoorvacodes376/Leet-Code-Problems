class Solution {
    int find(int[] nums,int n)
    {
        for(int i=0;i<nums.length;i++)
        {
            if(nums[i]==n)
            {
                return i;
            }
        }
        return -1;
    }
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int l1=nums1.length;
        int l2=nums2.length;
        int k=0;
        int[] ans=new int[l1];
        for(int i=0;i<l1;i++)
        {
            int x=find(nums2,nums1[i]);
            ans[k]=-1;
            for(int j=x;j<l2;j++)
            {
                if(nums2[j]>nums1[i])
                {
                    ans[k]=nums2[j];
                    break;
                }
            }
            k++;
        }
        return ans;
    }
}
