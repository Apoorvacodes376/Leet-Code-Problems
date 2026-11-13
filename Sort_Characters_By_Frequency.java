class Solution {
    public String frequencySort(String s) {
        HashMap<Character, Integer> table=new HashMap<>();
        for(int i=0;i<s.length();i++)
        {
            char c=s.charAt(i);
            table.put(c, table.getOrDefault(c, 0) + 1);
        }
        List<Character> list = new ArrayList<>(table.keySet());
        list.sort((a, b) -> table.get(b) - table.get(a));
        StringBuilder ans=new StringBuilder();
        for(char c:list)
        {
            for(int i=0;i<table.get(c);i++)
            ans.append(c);
        }
        return ans.toString();
    }
}
