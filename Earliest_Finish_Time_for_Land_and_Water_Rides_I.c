int earliestFinishTime(int* landStartTime, int landStartTimeSize, int* landDuration, int landDurationSize, int* waterStartTime, int waterStartTimeSize, int* waterDuration, int waterDurationSize) {
    int x=0,minl=1000,minw=1000,y=0,ans=0,finishWater=0,startLand=0,startWater=0,finishLand=0,finish=0,bestLandWater=INT_MAX,bestWaterLand=INT_MAX;
    for(int i=0;i<landStartTimeSize;i++)
    {
        if(landStartTime[i]<minl)
        {
            minl=landStartTime[i];
            x=landDuration[i];
        }
    }
    for(int i=0;i<waterStartTimeSize;i++)
    {
        if(waterStartTime[i]<minw)
        {
            minw=waterStartTime[i];
            y=waterDuration[i];
        }
    }
    for(int i=0;i<landStartTimeSize;i++)
    {
        for(int j=0;j<waterStartTimeSize;j++)
        {
            finishLand = landStartTime[i] + landDuration[i];
            startWater = fmax(finishLand, waterStartTime[j]);
            finish = startWater + waterDuration[j];
            if(finish < bestLandWater)
                bestLandWater = finish;
        }
    }
    // minw=finish;
    // finish=0;
    for(int i=0;i<landStartTimeSize;i++)
    {
        for(int j=0;j<waterStartTimeSize;j++)
        {
            finishWater = waterStartTime[j] + waterDuration[j];
            startLand = fmax(finishWater, landStartTime[i]);
            finish = startLand + landDuration[i];
            if(finish < bestWaterLand)
                bestWaterLand = finish;
        }
    }
    // minl=finish;
    // if(minw>minl)
    // {
    //     ans=y+minl+x;
    // }
    // else
    // {
    //     ans=minw+x+y;
    // }
    // return ans;
    return fmin(bestWaterLand,bestLandWater);
}
