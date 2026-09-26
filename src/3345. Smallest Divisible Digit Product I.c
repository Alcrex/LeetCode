//
// Created by vo1d on 2026-09-26.
//
int smallestNumber(int n, int t)
{
    while (1)
    {
        int num = n;
        int digitProduct = 1;
        while (num)
        {
            digitProduct *= (num % 10);
            num /= 10;
        }
        if (digitProduct % t == 0)
        {
            return n;
        }
        n++;
    }
}