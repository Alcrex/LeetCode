//
// Created by vo1d on 2026-09-24.
//
int smallestIndex(int *nums, int numsSize)
{

    for (int i = 0; i < numsSize; i++)
    {
        int k = 0;
        while (nums[i])
        {
            k += nums[i] % 10;
            nums[i] = nums[i] / 10;
        }
        if (k == i)
        {
            return i;
        }
    }
    return -1;
}