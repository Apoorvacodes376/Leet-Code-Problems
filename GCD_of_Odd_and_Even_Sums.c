int gcdOfOddEvenSums(int n) {
    int even = 0, odd = 0;
    int total = 2 * n;
    for (int i = 0; i <= total; i++) {
        if (i % 2 == 0)
            even += i;
        else
            odd += i;
    }
    int remainder;
    while (odd != 0) {
        remainder = even % odd;
        even = odd;
        odd = remainder;
    }
    return even;
}
