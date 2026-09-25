//
// Created by vo1d on 2026-09-25.
//
int firstStableIndex(int* nums, int numsSize, int k)
{
    int instability_score, i = 0;

    while (i < numsSize)
    {
        int max = nums[0], min = nums[i];
        for (int j = 0; j <= i; j++)
        {
            if (nums[j] > max)
            {
                max = nums[j];
            }
        }
        for (int j = i; j <= numsSize - 1; j++)
        {
            if (nums[j] < min)
            {
                min = nums[j];
            }
        }
        instability_score = max - min;
        if (instability_score <= k)
        {
            return i;
        }
        i++;
    }
    return -1;
}