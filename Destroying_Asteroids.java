class Solution {
    public boolean asteroidsDestroyed(int mass, int[] asteroids) {
        Arrays.sort(asteroids);
        long curr=mass;
        int asteroidsSize=0;
        int i=0;
        
        
    for( i=0;i<asteroids.length;i++)
    {
        int val=asteroids[i];
        if(val>curr)return false;
        curr+=val;
    }
    return true;
    }
}
