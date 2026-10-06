class Solution {
    public int minAddToMakeValid(String s) {
        Stack<Character> stack=new Stack<>();
        int l=s.length();
        int count=0;
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            if(c=='(')
            {
                stack.push(c);
            }
            else if(c==')'&&!stack.empty())
            {
                stack.pop();
            }
            else if(c==')'&&stack.empty())
            {
                count++;
            }
        }
        while(!stack.empty())
        {
            count++;
            stack.pop();
        }    
        return count;
    }
}
