class Solution {
    boolean check(Stack <Character> stack, String part)
    {
        int start=stack.size()-part.length();
        for(int i=0;i<part.length();i++)
        {
            // char c=part.charAt(i);
            // if(i!=c)return false;
            if(stack.get(start+i)!=part.charAt(i))return false;
        }
        return true;
    }
    public String removeOccurrences(String s, String part) {
        Stack <Character> stack=new Stack<>();
        int l=s.length();
        int ll=part.length();
        int j=0;
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            char d=part.charAt(j);
            stack.push(c);
            // if(c==d)
            // {
            //     j++;
            //     if(j==part.length())
            //     {
            //         // while(j!=0)
            //         for(int k=0;k<ll;k++)
            //         {
            //             stack.pop();
            //             // j--;
            //             j=0;
            //         }
            //     }
            // }
            // else j=0;
            if(stack.size()>=ll)
            {
                if(!check(stack,part))j=0;
                else
                {
                    for(int x=0;x<ll;x++)
                    {
                        stack.pop();
                    }
                }
            }
        }
        String ans="";
        int i=0;
        while(!stack.empty())
        {
            ans+=stack.pop();
        }
        String rev = new StringBuilder(ans).reverse().toString();
        return rev;
    }
}
