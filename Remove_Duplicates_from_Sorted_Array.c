// int removeDuplicates(int* nums, int numsSize) {
//     int na[100];
//     for(int i=1;i<numsSize;i++)
//     {
//         if(nums[i]!=nums[i-1])
//         {  
//             for(int j=0;j<numsSize;j++)  {   
//                 // na[j]=nums[i-1];
//                 // j+=1;
//                 nums[j]=nums[i];
//                 j++;
//             }
//                 // numsSize--;
//                 // break;
//             //nums[numsSize-1]=0;           
//         }
//         // break;
//         // else continue;
//     }
//     return *nums;
// }

int removeDuplicates(int* nums, int numsSize) {
    if(numsSize == 0) return 0;

    int i = 0;

    for(int j = 1; j < numsSize; j++)
    {
        if(nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}
