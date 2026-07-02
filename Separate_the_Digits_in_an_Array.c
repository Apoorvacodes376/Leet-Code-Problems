/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* separateDigits(int* nums, int numsSize, int* returnSize) {
    // int rem=0;
    // // returnSize=100
    // // int* ans = (int*) malloc(*returnSize * sizeof(int));
    // int *ans = (int *)malloc(sizeof(int) * numsSize * 6);
    // for(int i=0;i<numsSize;i++)
    // {
    //     // if(nums[i]>9)
    //     // {
    //         while(nums[i]!=0)
    //         {
    //             rem=nums[i]%10;
    //             numsSize++;
    //             // nums[i+1]=rem;
    //             ans[i]=rem;
    //             nums[i]/=10;
    //             // i++;
    //         }
    //     // }
    //     // else continue;
    // }
    // return ans;
    int total = 0;

    // Count total digits
    for (int i = 0; i < numsSize; i++) {
        int temp = nums[i];
        if (temp == 0)
            total++;
        while (temp != 0) {
            total++;
            temp /= 10;
        }
    }

    int *ans = (int *)malloc(total * sizeof(int));
    *returnSize = total;

    int idx = 0;

    for (int i = 0; i < numsSize; i++) {
        int temp = nums[i];

        if (temp == 0) {
            ans[idx++] = 0;
            continue;
        }

        int rev[10];
        int cnt = 0;

        while (temp != 0) {
            rev[cnt++] = temp % 10;
            temp /= 10;
        }

        for (int j = cnt - 1; j >= 0; j--) {
            ans[idx++] = rev[j];
        }
    }

    return ans;
}
