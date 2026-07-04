int countMonobit(int n) {
    if (n == 0) return 1;
    
    int count = 1; // Count '0' initially
    long long current = 1; // Tracks 1, 3, 7, 15, 31...
    
    while (current <= n) {
        count++;
        current = (current << 1) | 1; // Shifts left and adds a 1 bit
    }
    
    return count;
}
