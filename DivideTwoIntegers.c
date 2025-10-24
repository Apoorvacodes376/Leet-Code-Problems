int divide(int dividend, int divisor) {
    if(dividend==INT_MIN && divisor == -1)
        return INT_MAX;
    // else if (dividend==1&&divisor==-1) return -1;
    int op=dividend/divisor;
    return op;
}
