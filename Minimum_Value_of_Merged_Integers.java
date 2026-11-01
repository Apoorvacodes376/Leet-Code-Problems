class Solution {
    int merge(int n1,int n2)
    {
        String s1=Integer.toString(n1);
        Stack<Integer>stack=new Stack<>();
        while(n2!=0)
        {
            int rem=n2%10;
            // s1+=rem;
            stack.push(rem);
            n2/=10;
        }
        while(!stack.empty())
        {
            s1+=stack.pop();
        }
        int x=Integer.parseInt(s1);
        return x;
    }
    public int minMergedInteger(int[] nums) {
        int minn=100000000;
        for(int i=0;i<nums.length;i++)
        {
            if(i%2==0)
            {
                minn=Math.min(minn,merge(nums[i],nums[i+1]));
            }
        }
        return minn;
    }
}
