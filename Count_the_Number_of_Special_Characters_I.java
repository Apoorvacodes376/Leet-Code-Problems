// class Solution {
//     public int numberOfSpecialChars(String word) {
//         // String w=word.toLowerCase();
//         // int count=0;
//         // for(int i=0;i<word.length();i++)
//         // {
//         //     char x=word.charAt(i);
//         //     char y=w.charAt(i);
//         //     if(x!=y)count++;
//         // }
//         // return count;
//         // String w=word.toLowerCase();
//         int count=0;
//         for(int i=0;i<word.length();i++)
//         {
//             char x=word.charAt(i);
//             int a1=(int)x;
//             // char y=w.charAt(i);
//             // if(x!=y)count++;
//             for(int j=0;j<word.length;j++)
//             {
//                 char y=word.charAt(j);
//                 int a2=(int)y;
//                 // if(Charecter.isLowerCase(x)&& Charecter.isUpperCase(y))
//             }
//         }
//         return count;
//     }
// }
class Solution {
    public int numberOfSpecialChars(String word) {
        int count=0,rep=0;
        boolean found=false;
        // char[] chars = input.toCharArray();
        for(int i=0;i<word.length();i++)
        {
            char x=word.charAt(i);
            if(Character.isUpperCase(x))
            {
                // rep=0;
                for(int j=0;j<word.length();j++)
                {
                    char y=word.charAt(j);
                    if(x==y)rep++;
                }
                found=false;
                char changed=Character.toLowerCase(x);
                for(int j=0;j<word.length();j++)
                {
                    char y=word.charAt(j);
                    if(changed==y){found=true;break;}
                }
                if(found&& word.indexOf(x)==i)count++;
            }
            // for(int j=0;j<word.length;j++)
            // {
            //     char y=word.charAt(j);
            //     int a2=(int)y;
            //     // if(Charecter.isLowerCase(x)&& Charecter.isUpperCase(y))
            // }
        }
        // count-=rep;
        return count;
    }
}
