int gcd(int a,int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int com(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}

long long gcdSum(int* nums, int numsSize) {
    int max=INT_MIN;
    for(int i=0;i<numsSize;i++)
    {
        max=fmax(max,nums[i]);
        nums[i]=gcd(max,nums[i]);
    }
    qsort(nums,numsSize,sizeof(int),com);
    int c=numsSize+1;
    long long ret=0;
    // for(int i=c-1;i>=0;i--)
    for(int i=0;i<numsSize/2;i++)
    {
        // ret+=gcd(nums[i],nums[(numsSize-1)-i]);
        ret += gcd(nums[i], nums[numsSize - 1 - i]);

    }
    return ret;
}
// #include <stdlib.h>

// int gcd(int a, int b)
// {
//     while(b != 0)
//     {
//         int rem = a % b;
//         a = b;
//         b = rem;
//     }
//     return a;
// }

// int com(const void *a, const void *b)
// {
//     return (*(int *)a - *(int *)b);
// }

// long long gcdSum(int* nums, int numsSize) {

//     int prefixGcd[numsSize];
//     int mx = 0;

//     for(int i = 0; i < numsSize; i++)
//     {
//         if(nums[i] > mx)
//             mx = nums[i];

//         prefixGcd[i] = gcd(nums[i], mx);
//     }

//     qsort(prefixGcd, numsSize, sizeof(int), com);

//     long long ans = 0;

//     for(int i = 0; i < numsSize / 2; i++)
//     {
//         ans += gcd(prefixGcd[i], prefixGcd[numsSize - 1 - i]);
//     }

//     return ans;
// }
