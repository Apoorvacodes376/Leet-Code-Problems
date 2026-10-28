class Solution {
    boolean find(int n, int[] nums2,int l)
    {
        // boolean found=false;
        for(int i=0;i<l;i++)
        {
            if(n==nums2[i]) return true;
        }
        return false;
    }
    public int[] intersection(int[] nums1, int[] nums2) {
        int x=(nums1.length<nums2.length) ?nums1.length :nums2.length;
        int ans[]=new int[x];
        int k=0;
        for(int i=0;i<nums1.length;i++)
        {
            if(find(nums1[i],nums2,nums2.length))
            {
                if(!find(nums1[i],ans,k))
                ans[k++]=nums1[i];
            }
            // for(int j=0;j<nums2.length;j++)
            // {
            //     if(nums1[i]==nums2[j])ans[k++]=nums1[i];
            // }
        }
        int fin[]=new int[k];
        for(int i=0;i<k;i++)
        {
            fin[i]=ans[i];
        }
        // Arrays.sort(ans);
        // int fin[]=new int[ans.length];
        // int l=0;
        // for(int i=0;i<ans.length-1;i++)
        // {
        //     if(ans[i]!=ans[i++])
        //     {
        //         fin[l++]=ans[i];
        //     }
        // }
        // return ans;
        return fin;
    }
}
