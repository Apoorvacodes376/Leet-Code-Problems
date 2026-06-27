class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=0;
        int m = matrix.size();
        int n = matrix[0].size();
    while(i<m)
    {
        j=0;
        while(j<n)
        {
            if(target==matrix[i][j])
            {
                return true;
            }
            j++;
        }
        i++;
    }
    return false;
    }
};
