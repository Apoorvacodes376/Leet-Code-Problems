class Solution {
    public String reversePrefix(String word, char ch) {
        Stack<Character> stack=new Stack<>();
        int ind=0;
        boolean found=false;
        for(int i=0;i<word.length();i++)
        {
            char c=word.charAt(i);
            stack.push(c);
            if(c==ch)
            {
                ind=i;
                found=true;
                break;
            }
        }
        if(!found) return word;
        // String rev="";
        StringBuilder rev=new StringBuilder();
        for(int i=0;i<=ind;i++)
        {
            // char c=rev.charAt(i);
            rev.append(stack.pop());
        }
        for(int i=ind+1;i<word.length();i++)
        {
            // char c=rev.charAt(i);
            char d=word.charAt(i);
            rev.append(d);
        }
        return rev.toString();
    }
}
