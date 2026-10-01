class Solution {
    public boolean isValid(String s) {
        Stack<Character> stackb=new Stack<>();
        Stack<Character> stackc=new Stack<>();
        Stack<Character> stacks=new Stack<>();
        int countb=0,countc=0,counts=0;
        // for(int i=0;i<s.length();i++)
        // {
        //     char c=s.charAt(i);
        //     if(c=='(')
        //     {
        //         // countb++;
        //         stackb.push(c);
        //     }
        //     if(c==')'&&stackb.peek()=='(')
        //     {
        //         stackb.pop();
        //     }
        //     if(c=='{')
        //     {
        //         // countb++;
        //         stackb.push(c);
        //     }
        //     if(c=='}'&&stackb.peek()=='{')
        //     {
        //         stackb.pop();
        //     }
        //     if(c=='[')
        //     {
        //         // countb++;
        //         stackb.push(c);
        //     }
        //     if(c==']'&&stackb.peek()=='[')
        //     {
        //         stackb.pop();
        //     }
        // }
        for(int i=0;i<s.length();i++)
        {
            char c=s.charAt(i);
            // stackb.push(c);
            // if(!stackb.empty()){
            if(!stackb.empty()&&c==')'&&stackb.peek()=='(')
            {
                stackb.pop();
            }
            else if(!stackb.empty()&&c=='}'&&stackb.peek()=='{')
            {
                stackb.pop();
            }
            else if(!stackb.empty()&&c==']'&&stackb.peek()=='[')
            {
                stackb.pop();
            }
            else
            {
                stackb.push(c);
            }
        }
        // if(stackb.empty()){
        // return true;
        // }
        return stackb.empty();
    }
}
