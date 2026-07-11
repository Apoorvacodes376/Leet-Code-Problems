int maxDistance(int* colors, int colorsSize) {
    int count=0,n=colorsSize;
    // for (int i=0;i<n-1;i++)
    // {
    //     // for(int j=0;j<n;j++)
    //     {
    //         // count++;
    //         // if( colors[i]==colors[j]) count=count;
    //         if(colors[i]!=colors[i+1]) count++;
    //         else continue;
    //     }
    // }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(colors[i]!=colors[j])
            {
                count=fmax(count,j-i);
            }
        }
    }
    return count;
}
