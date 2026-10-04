class Solution {
    // boolean check(String s)
    // {
    //     Stack<Character> stack=new Stack<>();
    //     int l=s.length();
    //     int count=0;
    //     for(int i=0;i<l;i++)
    //     {
    //         char c=s.charAt(i);
    //         if(c=='(')
    //         {
    //             stack.push(c);
    //             count++;
    //         }
    //         if(c==')'&&!stack.empty()) 
    //         {
    //             stack.pop();
    //             count++;
    //         }
    //     }
    //     if(stack.empty()&&count==l)return true;
    //     return false;
    // }
    public boolean checkValidString(String s) {
    //     String str1="";
    //     String str2="";
    //     String str3="";
    //     int l=s.length();
    //     for(int i=0;i<l;i++)
    //     {
    //         char c=s.charAt(i);
    //         if(c=='*')
    //         {
    //             str1+="(";
    //         }
    //         else
    //         {
    //             str1+=c;
    //         }
    //     }
    //     for(int i=0;i<l;i++)
    //     {
    //         char c=s.charAt(i);
    //         if(c=='*')
    //         {
    //             str2+=")";
    //         }
    //         else
    //         {
    //             str2+=c;
    //         }
    //     }
    //     for(int i=0;i<l;i++)
    //     {
    //         char c=s.charAt(i);
    //         if(c=='*')
    //         {
    //             continue;
    //         }
    //         else
    //         {
    //             str3+=c;
    //         }
    //     }
    //     String str="";
    //     // int l=s.length();
    //     Stack<Character> stack=new Stack<>();
    //     for(int i=0;i<l;i++)
    //     {
    //         char c=s.charAt(i);
    //         if(c=='(')
    //         {
    //             stack.push(c);
    //             str+=c;
    //         }
    //         if(c==')'&&!stack.empty())
    //         {
    //             stack.pop();
    //             str+=c;
    //         }
    //         if(c=='*'&&!stack.empty())
    //         {
    //             stack.pop();
    //             str+=')';
    //         }
    //         if(c=='*'&&stack.empty())
    //         {
    //             stack.push('(');
    //             str+='(';
    //         }
    //     }
    //     String newstr="";
    //     if(!check(str))
    //     {
    //         for(int i=0;i<l;i++)
    //         {
    //             char c=s.charAt(i);
    //             if(c=='*')
    //             {
    //                 continue;
    //             }
    //             else
    //             {
    //                 newstr+=c;
    //             }
    //         }
    //     }
    //     if((check(str)||check(newstr))||(check(str1)||check(str2)||check(str3)))return true;
    //     return false;
    //     // else if(check(str1)||check(str2)||check(str3))
    //     // {
    //     //     return true;
    //     // }
    //     // return false;
        Stack<Integer> open=new Stack<>();
        Stack<Integer> star=new Stack<>();
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            if(c=='(')open.push(i);
            else if(c=='*')star.push(i);
            else
            {
                if(!open.empty())open.pop();
                else if(!star.empty())star.pop();
                else return false;
            }
        }
        while(!open.empty()&&!star.empty())
        {
            if(open.peek()>star.peek())return false;
            open.pop();
            star.pop();
        }
        return open.empty();
    }
}
