class Solution {
    public boolean isNumber(String s) 
    // {
    //     int count=0;
    //     int n=s.length();
    //     // int[] arr=Arrays.stream(s.split(" ").mapToInt(Integer::parseInt).toArray());
    //     int[] arr=new int[n];
    //     // arr = s.toCharArray();

    //     // for(int i=0;i<n;i++)
    //     // {
    //     //     arr[i]=(int[])s[i];
    //     // }
    //     for(int i=0;i<n;i++)
    //     {
    //         arr[i]=s.charAt(i)-'0';
    //     }
    //     for(int i=0;i<n;i++)
    //     {
    //         if(arr[i]=='-'&&arr[i+1]=='-')return false;
    //         else if(arr[i]>=0 && arr[i]<=9)
    //         {
    //             count++;
    //         }
    //         else return false;
    //         if(arr[0]=='.')count++;

    //     }
    //     if (count>=n) return true;
    //     return false;
    // }
    {
        int n=s.length(), count=0,digit=0,dot=0,exp=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            
            if(i<n-1)
            { 
                j=i+1;
            }
            char c=s.charAt(i);
            // char d=s.charAt(j);
            char d = (i < n-1) ? s.charAt(i+1) : ' ';

            if(c=='-'&&d=='-') 
                return false;
            
            else if(c>='0'&&c<='9') 
            {
                // if(exp==1) return false;
                count++;
                digit++;
            }

            else if(c=='.'&&n>1) 
            {
                if(exp==1) return false;
                if(i>0 && (s.charAt(i-1)=='e' || s.charAt(i-1)=='E'))
                    return false;
                count++;
                dot++;
                if(dot>1)return false;
            }

            else if(i>0&&(c=='E'||c=='e'))
            { 
                if(exp==1) return false;
                if(digit==0 || i==n-1) return false;
                // if(i!=0 && i<n-1 && (s.charAt(i+1)!='+' && s.charAt(i+1)!='-'))
                // if(i!=0 && i<n-1 && (s.charAt(i+1)!='+' && s.charAt(i+1)!='-'))
                //     return false;
                // if(d!='+')return false;
                exp=1;
                count++;

            }
            else if(c=='E'&&d=='+') 
            {
                count++;
                if(i!=0 && s.charAt(i-1)<='9' && s.charAt(i-1)>='0')
                    return false;
                
            }
            // else if(c=='+' || c=='-')
            // {
            //     if(i!=0 && s.charAt(i-1)!='e' && s.charAt(i-1)!='E')
            //         return false;
            //     // if(i!=0 && s.charAt(i+1)!='.' )
            //     // {
            //     //     count--;
            //     //     return false;
            //     // }
            //     // if(i==n-1 || !(s.charAt(i+1)>='0' && s.charAt(i+1)<='9'))
            //     if(i==n-1) return false;

            //     // if(!(Character.isDigit(s.charAt(i+1)) || s.charAt(i+1)=='.'))
            //     //     return false;
            //     count++;
            // }
            else if(c=='+' || c=='-')
            {
                if(i!=0 && s.charAt(i-1)!='e' && s.charAt(i-1)!='E')
                    return false;

                if(i==n-1) return false;

                if(i>0 && (s.charAt(i-1)=='e' || s.charAt(i-1)=='E'))    {
                        if(!(s.charAt(i+1)>='0' && s.charAt(i+1)<='9'))
                            return false;
                    }

                count++;
            }
            else return false;
        }
        if(count==n && digit>0)return true;
        else return false;
    }
}
