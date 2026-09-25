//
// Created by vo1d on 2026-09-25.
//
int reverseDegree(char *s)
{
    int k = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        k += (27 - (s[i] - 'a' + 1)) * (i + 1);
    }
    return k;
}