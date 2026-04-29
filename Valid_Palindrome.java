class Solution {
    public boolean isPalindrome(String s) {
        s=s.toLowerCase();
        s = s.replaceAll("[^a-zA-Z0-9]", "");
        int n=s.length();
        // String r = new StringBuilder(s).reverse().toString();
        // if (r==s) return true;
        for(int i=0;i<n;i++)
        {
            char c=s.charAt(i);
            // for(int j=n-1;j>=0;j++)
            // {
            //     char d=s.charAt(j);
            //     if(c==d) continue;
            //     else return false;
            // }
            if (c!=s.charAt(n-1-i))return false;
        }        
        // else
        return true;
    }
}
