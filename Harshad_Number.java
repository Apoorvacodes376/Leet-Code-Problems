class Solution {
    public int sumOfTheDigitsOfHarshadNumber(int x) {
        // int sum=0;
        // int di=x;
        // int rem=0;
        // // while(i!=0)
        // // {
        // //     rem=x%10;
        // //     sum+=rem;
        // //     x/=10;
        // //     i--;
        // // }
        // String nm=Integer.toString(x);
        // for(int i=0;i<nm.length();i++)
        // {
        //     // int y=Integer.parseInt(nm);
        //     int c=nm.charAt(i);
        //     sum+=c;
        // }
        // if(sum!=0 && x%sum==0)return sum;
        // return sum;
        int sum = 0, dup = x, rem = 0;
        while(x != 0)
        {
            rem = x % 10;
            sum += rem;
            x /= 10;
        }
        if(sum != 0 && dup % sum == 0)
        {
            return sum;
        }
        return -1;
    }
}
