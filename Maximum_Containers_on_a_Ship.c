int maxContainers(int n, int w, int maxWeight) {
    return fmin(n*n,maxWeight/w);
}
