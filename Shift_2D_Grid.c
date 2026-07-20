/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k, int* returnSize, int** returnColumnSizes) {
    *returnColumnSizes = (int*)malloc(gridSize  * sizeof(int));
    *returnSize = gridSize;
    int **ans = (int**)malloc(gridSize  * sizeof(int*));
    for(int i = 0; i < gridSize; i++)
    {
        ans[i] = (int*)malloc(gridColSize[i] * sizeof(int));
        (*returnColumnSizes)[i] = gridColSize[i];
    }
    if(k == 0)
    {
        for(int i = 0; i < gridSize; i++)
    {
        for(int j = 0; j < gridColSize[i]; j++)
        {
            ans[i][j] = grid[i][j];
        }
    }
    return ans;
    }
    while(k--){
            ans[0][0]=grid[gridSize-1][gridColSize[gridSize-1]-1];
    for(int i=0;i<gridSize;i++)
    {
        // ans[i] = (int*)malloc(gridColSize[i] * sizeof(int));
        // (*returnColumnSizes)[i] = gridColSize[i];
        for(int j=0;j<gridColSize[i]-1;j++)
        {
            ans[i][j+1]=grid[i][j];
            // ans[i] = (int*)malloc(gridColSize[i] * sizeof(int));
        }
        if(i != gridSize-1)ans[i+1][0]=grid[i][gridColSize[i]-1];

    }
    for(int i = 0; i < gridSize; i++)
{
    for(int j = 0; j < gridColSize[i]; j++)
    {
        grid[i][j] = ans[i][j];
    }
}
    }
    return ans;
}Shift 2D Grid
