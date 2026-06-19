int largestAltitude(int* gain, int gainSize) {
    int arr[gainSize],a=0,max=0;
    for(int i=0;i<gainSize;i++)
    {
        a+=gain[i];
        if(max<a)max=a;
    }
    return max;
}
