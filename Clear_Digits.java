class Solution {
    public String clearDigits(String s) {
        // if(isAlpha(s))return true;
        int x=0;
        Stack<Character> stack = new Stack<>();
        for(int i=0;i<s.length();i++)
        {
            char c=s.charAt(i);
            if(Character.isLetter(c))
            {
                stack.push(c);
                x++;
            }
            else{
                stack.pop();
                x--;
            }
        }
        // for(int i=0;i<x;i++)
        // {
        //     char c=s.charAt(i);
        //     c=stack.pop();
        // }
        StringBuilder res=new StringBuilder();
        while(!stack.empty())
        {
            res.append(stack.pop());
        }
        return res.reverse().toString();
    }
}
