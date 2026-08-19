class Solution {
    public String removeOuterParentheses(String s) {
        Stack<Character> stack=new Stack<>();
        int i=0,j=0;
        String str="";
        // while(true)
        for(i=0;i<s.length();i++)
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
                // char d=str.charAt(j);
                // d=stack.pop();
                if(!stack.empty())str+=c;
                // j++;
            }
            // i++;
        }
        return str;
    }
}
