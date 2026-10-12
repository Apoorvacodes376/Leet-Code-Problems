class Solution {
    public int passwordStrength(String password) {
        // char pwd[]= password.toCharArray();
        // int l=password.length();
        // char arr[]= new char[l];
        // int nl=0;
        // for(int i=0;i<l;i++)
        // {
        //     for(int j=i;j<l-i-1;j++)
        //     {
        //         if(pwd[i]!=pwd[j]){
        //         arr[i]=pwd[i];
        //         nl++;}
        //     }
        // }
        // int strength=0;
        // for(int i=0;i<nl;i++)
        // {
        //     char c=arr.charAt(i);
        //     if(Character.isLowerCase(arr[i]))strength+=1;
        //     if(Character.isUpperCase(arr[i]))strength+=2;
        //     if(Character.isDigit(arr[i]))strength+=3;
        //     if(c=='!'||c=='@'||c=='#'||c=='$') strength+=5;
        // }
        // return strength;
        int strength=0;
        Set<Character> set=new LinkedHashSet<>();
        for (char c:password.toCharArray()) 
        {
            set.add(c);
        }
        StringBuilder sb=new StringBuilder();
        for (char c:set) 
        {
            sb.append(c);
        }
        int l=sb.length();
        for(int i=0;i<l;i++)
        {
            char c=sb.charAt(i);
            if(Character.isLowerCase(c))strength+=1;
            if(Character.isUpperCase(c))strength+=2;
            if(Character.isDigit(c))strength+=3;
            if(c=='!'||c=='@'||c=='#'||c=='$')strength+=5;
        }
        return strength;
    }
}
