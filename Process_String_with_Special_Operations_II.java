class Solution {
    String star(String s, int l)
    {
        String res="";
        for(int i=0;i<l-1;i++)
        {
            char c=s.charAt(i);
            res+=c;
        }
        return res;
    }
    String dup(String s,int l)
    {
        String res=s;
        for(int i=0;i<l;i++)
        {
            res+=s.charAt(i);
        }
        return res;
    }
    String rev(String s,int l)
    {
        String rev="";
        for(int i=l-1;i>=0;i--)
        {
            rev+=s.charAt(i);
        }
        return rev;
    }
    public char processStr(String s, long k) {
        int l=s.length();
        String x="";
        for(int i=0;i<l;i++)
        {
            char c=s.charAt(i);
            if(c!='*'&&c!='#'&&c!='%')
            {
                x+=c;
            }
            if(c=='*')
            {
                x=star(x,x.length());
            }
            if(c=='#')
            {
                x=dup(x,x.length());
            }
            if(c=='%')
            {
                x=rev(x,x.length());
            }
        }
        if(x.length()>k&&k>=0)return x.charAt((int)k);
        return '.';
    }
}
// // class Solution {
// //     String star(String s)
// //     {
// //         int l=s.length();
// //         if(l==0)return s;
// //         return s.substring(0,l-1);
// //     }
// //     String dup(String s,long  l)
// //     {
// //         return s+s;
// //     }
// //     String rev(String s,long  l)
// //     {
// //         return new StringBuilder(s).reverse().toString();
// //     }
// //     public char processStr(String s, long k) {
// //         int l=s.length();
// //         String x="";
// //         for(int i=0;i<l;i++)
// //         {
// //             char c=s.charAt(i);
// //             if(c!='*'&&c!='#'&&c!='%')
// //             {
// //                 x+=c;
// //             }
// //             long  xl=x.length();
// //             if(c=='*')
// //             {
// //                 x=star(x);
// //             }
// //             if(c=='#')
// //             {
// //                 x=dup(x,xl);
// //             }
// //             if(c=='%')
// //             {
// //                 x=rev(x,xl);
// //             }
// //         }
// //         if(x.length()>k&&k>=0)return x.charAt((int)k);
// //         return '.';
// //     }
// // }

class Solution {
    public char processStr(String s, long k) {
        int n = s.length();
        long[] len = new long[n];
        long size = 0;

        for (int i = 0; i < n; i++) {
            char c = s.charAt(i);

            if (c == '*') {
                size = Math.max(0, size - 1);
            } else if (c == '#') {
                size *= 2;
            } else if (c != '%') {
                size++;
            }

            len[i] = size;
        }

        if (k < 0 || k >= size)
            return '.';

        for (int i = n - 1; i >= 0; i--) {
            char c = s.charAt(i);
            long prev = (i == 0) ? 0 : len[i - 1];

            if (c == '%') {
                k = len[i] - 1 - k;
            } else if (c == '#') {
                if (k >= prev)
                    k -= prev;
            } else if (c != '*' && k == prev) {
                return c;
            }
        }

        return '.';
    }
}
