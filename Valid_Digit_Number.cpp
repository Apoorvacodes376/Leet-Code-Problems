class Solution {
public:
    bool validDigit(int n, int x) {
        int res1 = 0, res2 = 0, rev = 0;
    while(n != 0)
    {
        int last = n % 10;
        if(last == x)
        {
            res1 = 1;
            // break;
        }
        rev = rev * 10 + last;
        n /= 10;
    }

    while(rev != 0)
    {
        int last = rev % 10;
        if(last == x) 
        {
            break;
        }
        else 
        {
            res2 = 1;
            break;
        }
        rev /= 10;
    }
    if (res1==1 && res2 == 1)
        return true;
    else 
        return false;
    }
};
