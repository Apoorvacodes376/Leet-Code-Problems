class Solution {
    public boolean checkString(String s) {
        int ia=-1,ib=-1;
        for(int i=0;i<s.length();i++)
        {
            char a=s.charAt(i);
            if(a=='a')
            {
                ia=i;
            }
        }
        for(int i=s.length()-1;i>=0;i--)
        {
            char b=s.charAt(i);
            if(b=='b')
            {
                ib=i;
            }
        }
        if(ia<ib||ib==-1)return true;
        return false;
    }
}
