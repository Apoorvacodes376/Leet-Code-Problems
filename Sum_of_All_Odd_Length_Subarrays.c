int sumOddLengthSubarrays(int* arr, int arrSize) {
    int sum=0;
    for(int i=0;i<arrSize;i++)
    {
        for(int j=i;j<arrSize;j+=2)
        {
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
        }
    }
    return sum;
}

// int sumOddLengthSubarrays(int* arr, int arrSize) {
//     int sum = 0;

//     for (int i = 0; i < arrSize; i++) {
//         int left = i + 1;
//         int right = arrSize - i;

//         int oddLeft = (left + 1) / 2;
//         int evenLeft = left / 2;

//         int oddRight = (right + 1) / 2;
//         int evenRight = right / 2;

//         int count = (oddLeft * oddRight) +
//                     (evenLeft * evenRight);

//         sum += arr[i] * count;
//     }

//     return sum;
// }
