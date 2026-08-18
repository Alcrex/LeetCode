//
// Created by vo1d on 2026-08-18.
//
int largestInteger(int* nums, int numsSize, int k) {
    int count[51] = {0};
    int i, j;

    for (i = 0; i <= numsSize - k; i++)
    {
        int seen[51] = {0};

        for (j = i; j < i + k; j++)
        {
            seen[nums[j]] = 1;
        }

        for (j = 0; j <= 50; j++)
        {
            if (seen[j])
                count[j]++;
        }
    }

    for (j = 50; j >= 0; j--)
    {
        if (count[j] == 1)
            return j;
    }
    return -1;
}