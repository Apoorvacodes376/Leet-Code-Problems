class Solution {
    public int digitFrequencyScore(int n) {
        int sum=0,rem=0;
        while(n!=0)
        {
            rem=n%10;
            sum+=rem;
            n/=10;
        }
        return sum;
    }
}
