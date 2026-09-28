class Solution {
    public String reverseParentheses(String s) {
        Stack <Character> stack=new Stack<>();
        String str="";
        for(int i=0;i<s.length();i++)
        {
            char c=s.charAt(i);
            // if(c=='(')
            // while(s.charAt(i)!=')')
            if(c=='(')
            {
                // while()
                // if(c=='(')
                // if(c!='(')
                stack.push(c);
            }
            else if(c==')')
            {
                // Stack<Character> temp=new Stack<>();
                String temp="";
                while(stack.peek()!='(')
                {
                    // temp.push(stack.pop());
                    temp+=stack.pop();
                }
                stack.pop();
                // while(!temp.isEmpty())
                for(int j=0;j<temp.length();j++)
                {
                    stack.push(temp.charAt(j));
                }
            }
            else
            {
                stack.push(c);
            }
        }
        while(!stack.isEmpty())
        {
            str=stack.pop()+str;
        }
        return str;
    }
}
