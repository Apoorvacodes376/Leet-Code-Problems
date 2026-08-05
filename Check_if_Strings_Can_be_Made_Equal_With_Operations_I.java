// class Solution {
//     // int check(String s1,String s2)
//     // {
//     //     for(int i=0;i<s1.length;i++)
//     //     {
//     //         // for(int j=0;j<s2.length;j++)
//     //         // {
//     //             char c1=s1.charAt(i);
//     //             char c2=s2.charAt(i);
//     //             if(c1!=c2) return 0;
//     //         // }
//     //     }
//     //     return 1;
//     // }
//     // String swap1(String s)
//     // {
//     //     char s1= s.CharAt(1);
//     //     char s2= s.CharAt(3);
//     //     char temp=s1;
//     //     s1=s2;
//     //     s2=temp;
//     // }
//     // String swap2(String s)
//     // {
//     //     char s1= s.CharAt(2);
//     //     char s2= s.CharAt(4);
//     //     char temp=s1;
//     //     s1=s2;
//     //     s2=temp;
//     // }
//     public boolean canBeEqual(String s1, String s2) {
//         // if(check(String s1,String s2))return true;
//         // else
//         // {
//         //     s1=swap1(String s1);
//         //     if(check(String s1,String s2))return true;
//         //     s1=swap1(String s1);
//         //     s1
//         // }
//         if(s1.charAt(0)!=s2.charAt(0)&&s1.charAt(0)!=s2.charAt(2))return false;
//         if(s1.charAt(2)!=s2.charAt(2)&&s1.charAt(2)!=s2.charAt(0))return false;
//         if(s1.charAt(1)!=s2.charAt(1)&&s1.charAt(1)!=s2.charAt(3))return false;
//         if(s1.charAt(3)!=s2.charAt(1)&&s1.charAt(3)!=s2.charAt(3))return false;
//         return true;
//     }
// }
class Solution {
    public boolean canBeEqual(String s1, String s2) {
        
        int i = 0, j = 2;

        while (j < s1.length()) {

            if (s1.charAt(i) == s2.charAt(i) && s1.charAt(j) == s2.charAt(j)) {

            }
            else if (s1.charAt(i) == s2.charAt(j) && s1.charAt(j) == s2.charAt(i)) {

            }
            else {
                return false;
            }

            i++;
            j++;
        }

        return true;
    }
}
