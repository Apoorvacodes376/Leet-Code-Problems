/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), compare);

    // Store [number, frequency]
    int freq[numsSize][2];
    int count = 0;
    int c = 1;

    for(int i = 1; i < numsSize; i++)
    {
        if(nums[i] == nums[i-1])
        {
            c++;
        }
        else
        {
            freq[count][0] = nums[i-1];
            freq[count][1] = c;
            count++;
            c = 1;
        }
    }

    // Add the last number
    freq[count][0] = nums[numsSize-1];
    freq[count][1] = c;
    count++;

    // Sort according to frequency
    for(int i = 0; i < count-1; i++)
    {
        for(int j = i+1; j < count; j++)
        {
            if(freq[i][1] < freq[j][1])
            {
                int temp = freq[i][0];
                freq[i][0] = freq[j][0];
                freq[j][0] = temp;

                temp = freq[i][1];
                freq[i][1] = freq[j][1];
                freq[j][1] = temp;
            }
        }
    }

    // Store answer
    int* ans = malloc(k * sizeof(int));

    for(int i = 0; i < k; i++)
    {
        ans[i] = freq[i][0];
    }

    *returnSize = k;
    return ans;
}
