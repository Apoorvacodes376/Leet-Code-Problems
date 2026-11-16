class Solution {
    String split(String s,int k)
    {
        String str="";
        int count=0,val=0;
        for(int i=0;i<s.length();i++)
        {
            val+=s.charAt(i)-'0';
            count++;
            if(count==k||i==s.length()-1)
            {
                str+=val;
                val=0;
                count=0;
            }
        }
        return str;
    }
    public String digitSum(String s, int k) {
        while(s.length()>k)
        {
            s=split(s,k);
        }
        return s;
    }
}
