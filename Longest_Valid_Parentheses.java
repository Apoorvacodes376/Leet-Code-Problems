class Solution {
    public int longestValidParentheses(String s) {
        // Stack <Character> stack=new Stack<>();
        // int l=s.length();
        // int count=0;
        // for(int i=0;i<l;i++)
        // {
        //     char c=s.charAt(i);
        //     if(c=='(')
        //     {
        //         stack.push(c);
        //         count++;
        //     }
        //     if(c==')'&&!stack.empty())
        //     {
        //         stack.pop();
        //         count++;
        //     }
        // }
        // if(!stack.empty())
        // {
        //     while(!stack.empty())
        //     {
        //         stack.pop();
        //         count--;
        //     }
        // }
        // return count;

        Stack<Integer> st=new Stack<>();
        st.push(-1);
        int l=s.length();
        int l1=0;
        int max=0;
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            if(c=='(')
            {
                st.push(i);
            }
            if(c==')'&&!st.empty())
            {
                st.pop();
                if(st.empty())
                {
                    st.push(i);
                }
                else
                {
                    l1=i-st.peek();
                    if(max<l1)
                    {
                        max=l1;
                    }
                }
            }
        }
        return max;
    }
}
