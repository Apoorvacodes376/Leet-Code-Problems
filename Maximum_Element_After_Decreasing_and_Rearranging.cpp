class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    arr[0]=1;
    int arrSize=arr.size();
    for(long long i=1;i<arrSize;i++)
    {
        if(arr[i] > arr[i - 1]+ 1)arr[i]=arr[i-1]+1;
    }
    return arr[arrSize-1];
    }
};
