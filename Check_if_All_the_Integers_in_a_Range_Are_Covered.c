bool isCovered(int** ranges, int rangesSize, int* rangesColSize, int left, int right) {
    for (int i = left; i <= right; i++) {
        bool found = false;
        for (int j = 0; j < rangesSize; j++) {
            if (i >= ranges[j][0] && i <= ranges[j][1]) {
                found = true;
                break;
            }
        }
        if (!found)
            return false;
    }

    return true;
}
