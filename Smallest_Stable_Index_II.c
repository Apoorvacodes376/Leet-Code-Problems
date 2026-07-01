// int firstStableIndex(int* nums, int numsSize, int k) {
//     long long arr[numsSize],max=INT_MIN,min=INT_MAX;
//     // for(long long i=0;i<numsSize;i++)
//     // {
//     //     max=INT_MIN;
//     //     min=INT_MAX;
//     //     for(long long j=0;j<=i;j++)
//     //     {
//     //         if(nums[j]>max)
//     //         {
//     //             max=nums[j];
//     //             // arr[i]=max;
//     //         }
//     //     }
//     //     for(long long j=i;j<numsSize;j++)
//     //     {
//     //         if(nums[j]<min)
//     //         {
//     //             min=nums[j];
//     //             // arr[i]=min;
//     //         }
//     //     }
//     //     arr[i]=max-min;
//     // }
//     for(int i=0;i<numsSize;i++)
// {
//     if(prefixMax[i] - suffixMin[i] <= k)
//         return i;
// }
//     long long x=0,flag=0;
//     // while(arr[x]!=0)
//     for(long long x=0;x<numsSize;x++)
//     {
//         if(arr[x]<=k) return x;
//         // if(min>k) flag=1;
//         // x++;
//     }
//     return -1;
// }
int firstStableIndex(int* nums, int numsSize, int k) {
    int prefixMax[numsSize];
    int suffixMin[numsSize];

    // Build prefix maximum array
    prefixMax[0] = nums[0];
    for (int i = 1; i < numsSize; i++) {
        prefixMax[i] = (prefixMax[i - 1] > nums[i]) ? prefixMax[i - 1] : nums[i];
    }

    // Build suffix minimum array
    suffixMin[numsSize - 1] = nums[numsSize - 1];
    for (int i = numsSize - 2; i >= 0; i--) {
        suffixMin[i] = (suffixMin[i + 1] < nums[i]) ? suffixMin[i + 1] : nums[i];
    }

    // Find the first stable index
    for (int i = 0; i < numsSize; i++) {
        if (prefixMax[i] - suffixMin[i] <= k)
            return i;
    }

    return -1;
}
