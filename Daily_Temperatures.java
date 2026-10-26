// This solution give TLE for the last test case on leetcode! 

class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        Stack<Integer> stack=new Stack<>();
        int l=temperatures.length;
        // stack.push(0);
        for(int i=0;i<l;i++)
        {
            boolean found=false;
            for(int j=i+1;j<l;j++)
            {
                if(temperatures[i]<temperatures[j])
                {
                    // stack.push(Math.abs(temperatures[i]-temperatures[j]));
                    // stack.push(temperatures[j]-stack.peek());
                    stack.push(j-i);
                    found=true;
                    break;
                }
                // if(j==l-1)
                // {
                //     stack.push(0);
                // }
            }
            if(found==false)
            {
                stack.push(0);
            }
        }
        // int arr[]=new int[l-1];
        // int j=0;
        // while(!stack.empty())
        // {
        //     arr[j++]=stack.pop();
        // }
        int j=0;
        int ans[]=new int[l];
        for(int i=l-1;i>=0;i--)
        {
            ans[i]=stack.pop();
        }
        return ans;
    }
}
