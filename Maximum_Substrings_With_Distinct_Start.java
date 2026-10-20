class Solution {
    public int maxDistinct(String s) {
        HashMap<Character, Integer> hash=new HashMap<>();
        for(int i=0;i<s.length();i++)
        {
            char c=s.charAt(i);
            hash.put(c,i);
        }
        int count=0;
        for(int i=0;i<hash.size();i++)
        {
            count++;
        }
        return count;
    }
}
