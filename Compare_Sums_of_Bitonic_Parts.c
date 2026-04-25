int compareBitonicSums(int* nums, int numsSize) {
    // int as=0,ds=0,i=0;
    // // for(int i=0;i<numsSize;i++)
    // {
    //     // while(nums[i]<nums[i+1]&&i<numsSize-1)
    //         while(i < numsSize - 1 && nums[i] < nums[i+1])

    //     {
    //         // if(nums[i]<=nums[i+1])
    //         as+=nums[i];
    //         i++;
    //     }
    //     // while(nums[i]>=nums[i+1] && i<numsSize-1)
    //         while(i < numsSize - 1 && nums[i] > nums[i+1])

    //     {
    //         // if(nums[i]>=nums[i+1])
    //         ds+=nums[i];
    //         i++;
    //     }
    // }
    // ds+=nums[i];
    // if(as>ds) return 0;
    // else if(ds>as) return 1;
    // else  return -1;
    double as = 0, ds = 0;
    int i = 0;

    while(i < numsSize - 1 && nums[i] < nums[i+1]) {
        as += nums[i];
        i++;
    }

    i++; // skip peak

    while(i < numsSize) {
        ds += nums[i];
        i++;
    }

    if(as > ds) return 0;
    else if(ds > as) return 1;
    else return -1;
}
