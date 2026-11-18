class Solution {
    public int minChanges(String s) {
        int count=0;
        for(int i=0;i<s.length();i+=2)
        {
            char c=s.charAt(i);
            char d=s.charAt(i+1);
            if(c!=d)
            {
                count++;
            }
        }
        return count;
    }
}
