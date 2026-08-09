int cmp(const void * a,const void * b)
{
    // return (*(int *)a-*(int*)b);
    int x=*(int*)a;
    int y=*(int*)b;
    return (x>y)?1:-1;
}
int firstMissingPositive(int* nums, int numsSize) {
    long long small=1,large, max=INT_MIN,min=INT_MAX,n=1,x=0;
    qsort(nums,numsSize,sizeof(int),cmp);
    // if(nums[0]<=0)
    // {
        // if(nums[numsSize-1]<=0) return 1;
        for(long long i=0;i<numsSize;i++)
        {
        //     if(nums[i]>=1)
        //     {
        //         if(nums[i]!=n++)x=n;
        //         return nums[i]!=1?1:x;
        //     }
        // }
        if(nums[i]==n) n++;
        else if(nums[i]>n)
        {
            return n;
        }
        // }
    }
    // else return 1;
    return n;
}
