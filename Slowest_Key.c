char slowestKey(int* releaseTimes, int releaseTimesSize, char* keysPressed) {
    int diff=0,arr[releaseTimesSize-1],j=0;
    char key=keysPressed[0];
    int max=releaseTimes[0];
    for(int i=0;i<releaseTimesSize-1;i++)
    {
        diff=releaseTimes[i+1]-releaseTimes[i];
        arr[j]=diff;
        j++;
        if(arr[j-1]>max ||(arr[j-1] == max && keysPressed[j] > key))
        {
            max=arr[j-1];
            key=keysPressed[j];
        }
    }
    // for(int i=0;i<releaseTimesSize;i++)
    // {
        // if(arr[i]>=max)
        // {
        //     max=arr[i];
        //     key=keysPressed[i];
        // }
    // }
    return key;
}
