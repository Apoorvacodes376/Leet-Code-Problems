class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        Stack<Integer> stack=new Stack<>();
        int l=temperatures.length;
        // int j=0;
        int ans[]=new int[l];
        for(int i=0;i<l;i++)
        {
            while(!stack.empty()&&(temperatures[stack.peek()]<temperatures[i]))
            {
                // stack.push(j-i);
                // j++;
                int j=stack.pop();
                ans[j]=i-j;
            }
            stack.push(i);
            // boolean found=false;
            // for(int j=i+1;j<l;j++)
            // {
            //     if(temperatures[i]<temperatures[j])
            //     {

            //         stack.push(j-i);
            //         found=true;
            //         break;
            //     }

            // }
            // if(found==false)
            // {
            //     stack.push(0);
            // }
        }
        // int ans[]=new int[l];
        // for(int i=l-1;i>=0;i--)
        // {
        //     ans[i]=stack.pop();
        // }
        return ans;
    }
}
