class Solution {
    public String removeDuplicates(String s) {
        Stack<Character> stack=new Stack<>();
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            if(!stack.empty()&&c==stack.peek())
            {
                stack.pop();
            }
            else
            {
                stack.push(c);
            }
        }
        String rev="";
        while(!stack.empty())
        {
            rev+=stack.pop();
        }
        String str="";
        for(int i=rev.length()-1;i>=0;i--)
        {
            str+=rev.charAt(i);
        }
        return str;
    }
}
