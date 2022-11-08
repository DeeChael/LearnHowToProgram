#include <malloc.h>
#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int i,j;
    int* result = NULL;
    for (i = 0; i < numsSize - 1; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result = (int*) malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}

int mainLeet1() {
    int* numsArray = (int*) malloc(sizeof(int) * 8);
    numsArray[0] = 2;
    numsArray[1] = 7;
    numsArray[2] = 8;
    numsArray[3] = 11;
    numsArray[4] = 24;
    numsArray[5] = 35;
    numsArray[6] = 76;
    numsArray[7] = 110;
    int* result = twoSum(numsArray, sizeof(numsArray), 112);
    printf("[%i, %i]", result[0], result[1]);
    return 0;
}