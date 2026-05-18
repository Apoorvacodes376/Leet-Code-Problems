class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int dup = x, rem = 0, sum = 0;
        while (x != 0) {
            rem = x % 10;
            sum += rem;
            x /= 10;
        }
        if (sum != 0 && dup % sum == 0) {
            return sum;
        }
        return -1;
    }
};
