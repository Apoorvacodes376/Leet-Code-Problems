#include<stdlib.h>
int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum = 0;
    int rem = 0;
    int dup = x;
    while(x != 0)
    {
        rem = x % 10;
        sum += rem;
        x /= 10;
    }
    if(sum != 0 && dup % sum == 0) 
    {
        return sum;
    }
    return -1; 
}
