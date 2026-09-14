class Solution {
    public String reverseWords(String s) {
        String rev="";
        String word="";
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            char c = s.charAt(i);
            if(c!=' ')
            {
                // count++;
                word = c + word;
            }
            else
            {
                rev += word + " ";
                word = "";
            }
        }
        rev += word;
        return rev;
    }
}
