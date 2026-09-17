//
// Created by vo1d on 2026-09-17.
//
bool isPalindrome(int x)
{
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }
    int revertedNumber = 0;
    while (x > revertedNumber)
    {
        revertedNumber = revertedNumber * 10 + x % 10;
        x = x / 10;
    }
    return x == revertedNumber || x == revertedNumber / 10;
}