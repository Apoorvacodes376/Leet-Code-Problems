// class Solution {
//     public char repeatedCharacter(String s) {
//         int l=s.length();
//         // s=sort(s);
//         char[] charArray = s.toCharArray();
//         Arrays.sort(charArray);
//         for(int i=0;i<l-1;i++)
//         {
//             char c=s.charAt(i);
//             char d=s.charAt(i+1);
//             if(c==d)return c;
//         }
//         return 0;
//     }
// }
class Solution {
    public char repeatedCharacter(String s) {
        HashSet<Character> set = new HashSet<>();

        for(int i = 0; i < s.length(); i++)
        {
            char c = s.charAt(i);

            if(set.contains(c))
                return c;

            set.add(c);
        }

        return 0;
    }
}
