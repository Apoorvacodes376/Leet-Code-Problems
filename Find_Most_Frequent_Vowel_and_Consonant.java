class Solution {
    public int maxFreqSum(String s) {
        HashMap<Character,Integer> vowels=new HashMap<>();
        // HashMap<Character,Integer> cons=new HashMap<>();
        int l=s.length();
        // int cv=0,cc=0;
        int[] con=new int[26];
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            {
                // vowels.put(c,cv++);
                vowels.put(c,vowels.getOrDefault(c,0)+1);
            }
            else
            {
                // cons.put(c,cc++);
                con[c-'a']++;
            }
        }
        int maxv=0,maxc=0;
        for(int i=0;i<26;i++)
        {
            maxc=Math.max(maxc,con[i]);
        }
        for(Integer x:vowels.values())
        {
            maxv=Math.max(maxv,x);
        }
        // int t=max(vowels)+max(cons);
        return maxc+maxv;
    }
}
