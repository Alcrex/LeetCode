/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdio.h>
#include <stdlib.h>

int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int i, j, temp;

    *returnSize = 0;

     for (i = 0; i < numsSize; i++) {
        for (j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            (*returnSize)++;
        }
    }

    if (*returnSize == 0) {
        return NULL;
    }

    int *result = (int *)malloc(*returnSize * sizeof(int));
    if (result == NULL){
        *result = 0;
        return NULL;
    }

    j = 0;
    for (i = 0; i < numsSize; i++){
        if (nums[i] == target){
            result[j] = i;
            j++;
        }
    }

    return result;
}