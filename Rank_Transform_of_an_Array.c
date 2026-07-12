/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


#include <stdlib.h>

typedef struct {
    int val;
    int idx;
} Pair;

int cmp(const void *a, const void *b) {
    Pair *p1 = (Pair *)a;
    Pair *p2 = (Pair *)b;
    return p1->val - p2->val;
}


int* arrayRankTransform(int* arr, int arrSize, int* returnSize) {
    int* ans = (int*)malloc(arrSize * sizeof(int));
    *returnSize=arrSize;
     if (arrSize == 0)
        return NULL;

    Pair *temp = (Pair *)malloc(arrSize * sizeof(Pair));
    // int *ans = (int *)malloc(arrSize * sizeof(int));

    for (int i = 0; i < arrSize; i++) {
        temp[i].val = arr[i];
        temp[i].idx = i;
    }

    qsort(temp, arrSize, sizeof(Pair), cmp);

    int rank = 1;
    ans[temp[0].idx] = rank;

    for (int i = 1; i < arrSize; i++) {
        if (temp[i].val != temp[i - 1].val)
            rank++;
        ans[temp[i].idx] = rank;
    }

    free(temp);
    return ans;
}
