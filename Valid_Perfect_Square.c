bool isPerfectSquare(int num) {
    long long count=0,i=0;
    while(i*i<num)
    {
        i++;
        if(i*i==num)return true;
    }
    return false;
}
