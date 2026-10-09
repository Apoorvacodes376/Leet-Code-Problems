// class Solution {
//     public int minInsertions(String s) {
//         // int counto=0,countc=0,l=s.length();
//         // for(int i=0;i<l;i++)
//         // {
//         //     char c=s.charAt(i);
//         //     if(c=='(')counto++;
//         //     else countc++;
//         // }
//         // int rem=0;
//         // if(countc/2==counto)return 0;
//         // else
//         // {
//         //     while(counto!=countc/2)
//         //     {
//         //         if(countc%2==0)
//         //         {
//         //             if(countc/2<counto)
//         //             {
//         //                 rem+=(counto-countc/2)*2;
//         //             }
//         //             else
//         //             {
//         //                 rem+=(countc/2-counto);
//         //             }
//         //         }
//         //         else
//         //         {
//         //             countc++;
//         //             rem++;
//         //             if(countc/2<counto)
//         //             {
//         //                 rem+=(counto-countc/2)*2;
//         //             }
//         //             else if(countc/2<counto)
//         //             {
//         //                 rem+=(countc/2-counto);
//         //             }
//         //             else return rem++;
//         //         }
//         //     }
//         // }
//         // return rem;
//         Stack<Character> stack= new Stack<>();
//         int l=s.length();
//         int count=0;
//         for(int i=0;i<l;i++)
//         {
//             char c=s.charAt(i);
//             // char d=s.charAt(i+1);
//             // if(i+1<l)
//             // d=s.chatAt(i+1);
//             if(c=='(')
//             {
//                 stack.push(c);
//             }
//             if(c==')')
//             {
//                 // if(i+1<l&&s.charAt(i+1)==')')i++;
//                 if (i + 1 < s.length() && s.charAt(i + 1) == ')')i++;
//                 // if(!stack.empty()&&stack.peek()==')')
//                 // {
//                 //     // stack.push(c);
//                 //     if(d==')'){
//                 //     stack.pop();
//                 //     count++;
//                 //     }
//                 //     // stack.pop();
//                 //     if(!stack.empty()&&stack.peek()=='(')stack.pop();
//                 // }
//                 else
//                 {
//                     // stack.push(c);
//                     count++;
//                 }
//             }
//         }
//         if(stack.empty())return 0;
//         // for(int i=0;i<stack.size();i++)
//         while(!stack.empty())
//         {
//             char c=stack.pop();
//             // if(c=='(')count+=2;
//             // else count++;
//             count+=2;
//         }
//         return count;
//     }
// }


class Solution {
    public int minInsertions(String s) {
        Stack<Character> stack = new Stack<>();
        int count = 0;

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);

            if (c == '(') {
                stack.push(c);
            } else {
                if (i + 1 < s.length() && s.charAt(i + 1) == ')') {
                    i++;
                } else {
                    count++;
                }

                if (!stack.empty()) {
                    stack.pop();
                } else {
                    count++;
                }
            }
        }

        while (!stack.empty()) {
            stack.pop();
            count += 2;
        }

        return count;
    }
}
