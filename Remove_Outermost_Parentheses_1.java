class Solution {
    public String removeOuterParentheses(String s) {
        Stack<Character> stack=new Stack<>();
        String str="";
        for(int i=0;i<s.length();i++)
        {
            char c=s.charAt(i);
            if(c=='(')
            {
                if(!stack.empty())str+=c;
                stack.push(c);
            }
            else 
            {
                stack.pop();
                if(!stack.empty())str+=c;
            }
        }
        return str;
    }
}
