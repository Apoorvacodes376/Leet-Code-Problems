int mySqrt(int x) {
    if (x < 2)
        return x;
    long i;
    for (i = 0; i <= x / 2 + 1; i++) {
        if (i * i == x)
            break;
        // return i;
        else if (i * i > x) {
            i -= 1;
            break;
        }
        // return i - 1;
    }
    return i;
}
