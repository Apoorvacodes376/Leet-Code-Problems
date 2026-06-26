class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long res=0,i=0;
        while(res<=n)
        {
            res=pow(2,i);
            i++;
            if(res==n) return true;
        }
        return false;
    }
};
