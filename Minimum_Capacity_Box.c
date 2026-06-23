int minimumIndex(int* capacity, int capacitySize, int itemSize) {
    int ind=-1, min=INT_MAX;
    for(int i=0;i<capacitySize;i++)
    {
        if(capacity[i]<min&&capacity[i]>=itemSize)
        {
            min=capacity[i];
            ind=i;
        }
    }
    return ind;
}
