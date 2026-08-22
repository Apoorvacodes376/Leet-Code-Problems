bool checkDivisibility(int n) {
    int sum = 0;
    int pro = 1;
    int n1 = n;
    while (n1 != 0) {
        int rem = n1 % 10;
        sum += rem;
        pro *= rem;
        n1 /= 10;
    }
    int total = sum + pro;
    if (n % total == 0)
        return true;
    return false;
}
