class Solution {
    public String toLowerCase(String s) {
        int l=s.length();
        StringBuilder str=new StringBuilder();
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            str.append(Character.toLowerCase(c));
        }
        return str.toString();
    }
}
