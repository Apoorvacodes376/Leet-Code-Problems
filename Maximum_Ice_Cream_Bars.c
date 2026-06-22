int findmax(int *costs, int costsSize){
    int max=-1;
    for (int i=0; i<costsSize; i++) {
        if(costs[i]>max) {
            max=costs[i];
        }
    }
    return max;
}
int maxIceCream(int* costs, int costsSize, int coins) {
    int max=findmax(costs,costsSize);
    int count=0;
    int array[max+1];
    for(int i=0; i<max+1; i++) {
        array[i]=0;
    }
    for(int i=0; i<costsSize; i++) {
        array[costs[i]]++;
    }
    for(int i=0; i<max+1; i++) {
        if(array[i]==0) {
            continue;
        }
        else {
            int buy=coins/i;
            if(array[i]<buy) {
                buy=array[i];
            }
            count=count+buy;
            coins=coins-(buy*i);
        }
    }
    return count;
}
