bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int i=0,j=0;
    while(i<matrixSize)
    {
        j=0;
        while(j<matrixColSize[i])
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
}Search a 2D Matrix
