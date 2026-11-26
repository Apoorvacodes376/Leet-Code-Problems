class Solution {
    public boolean canAliceWin(int n) {
        if(n<10) return false;
        // int i=10;
        // while(n!=0)
        // {
        //     n=n-i;
        //     i--;
        //     if(i==0)
        //     {
        //         return true;
        //     }
        // }
        // return false;
        int stones=10;
        while (true) {
            if ((n < stones) && (stones % 2 == 0))
                return false;

            else if ((n < stones) && (stones % 2 != 0))
                return true;

            n -= stones;
            stones--;
        }
    }
}
