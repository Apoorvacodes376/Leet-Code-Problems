bool isPalindrome(int x) {
    if(x<0) return false;
    double or=x;
    double ro=0;
    int digit;
    while(x>0)
    {
        digit=x%10;
        ro=ro*10+digit;
        x/=10;
    }
    return or==ro;
}
