class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        HashMap<Integer, Character> hash=new HashMap<>();
        int count=0;
        for(int i=0;i<jewels.length();i++)
        {
            char c=jewels.charAt(i);
            for(int j=0;j<stones.length();j++)
            {
                char d=stones.charAt(j);
                if(c==d)
                {
                    hash.put(count++,c);
                }
            }
        }
        return hash.size();
    }
}
