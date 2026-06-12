class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int m=n*n;
        int t=maxWeight/w;
        if(m>t) return t;
        else return m;
    }
};
