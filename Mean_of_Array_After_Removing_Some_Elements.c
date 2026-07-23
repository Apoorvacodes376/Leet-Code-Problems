double trimMean(int* arr, int arrSize) {
    int fp = arrSize * 5 / 100;
    int l = arrSize - fp;
    int sum = 0;

    for (int i = fp; i < l; i++) {
        sum += arr[i];
    }

    return (double)sum / (arrSize - 2 * fp);
}
