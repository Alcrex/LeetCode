//
// Created by vo1d on 2026-09-25.
//
int totalNumbers(int* digits, int digitsSize)
{
    int used[1000] = {0};
    int count = 0;

    for (int i = 0; i < digitsSize; i++)
    {
        if (digits[i] % 2 != 0)
            continue;

        for (int j = 0; j < digitsSize; j++)
        {
            if (j == i)
                continue;

            for (int k = 0; k < digitsSize; k++)
            {
                if (digits[k] == 0)
                    continue;

                if (k == i || k == j)
                    continue;

                int num = digits[k] * 100 + digits[j] * 10 + digits[i];

                if (!used[num])
                {
                    used[num] = 1;
                    count++;
                }
            }
        }
    }
    return count;
}