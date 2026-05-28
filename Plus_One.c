// /**
//  * Note: The returned array must be malloced, assume caller calls free().
//  */
// int* plusOne(int* digits, int digitsSize, int* returnSize) {
//     // int ans[]=(int*)malloc(digitsSize*sizeof(int*));
//     int* ans = (int*)malloc((digitsSize+1) * sizeof(int));
//     *returnSize = digitsSize+1;
//     for(int i=digitsSize-1;i>=0;i--)
//     {
//         // if(i==digitsSize-1)
//         {
//             digits[i]+=1;
//             if(digits[i]<10)
//         {
//             *returnSize=digitsSize;
//             return digits;
//         }
//             // break;
//             digits[i] = 0;
//         }
//         // if(digits[i]=0) ;
//         // digits[i] = 0;

//     }
//     ans[0] = 1;
//     for (int i = 1; i <= digitsSize; i++) ans[i] = 0;
//     *returnSize = digitsSize + 1;
//     // return res;
//     return ans;
// }
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* ans = (int*)malloc((digitsSize + 1) * sizeof(int));
    for (int i = digitsSize - 1; i >= 0; i--) {
        digits[i]++;
        if (digits[i] < 10) {
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }
    ans[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        ans[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return ans;
}
