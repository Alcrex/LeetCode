//
// Created by vo1d on 2026-08-15.
//
int maximumLengthSubstring(char* s) {
    int count[26] = {0};

    int left = 0, right = 0;
    int maxLen = 0;
    int len = 0;

    for (right=0; s[right]!='\0'; right++)
    {
        count[s[right]-'a']++;

        // If a character appears more than twice,
        // move the left pointer until the window becomes valid
        while (count[s[right]-'a']>2)
        {
            count[s[left]-'a']--;
            left++;
        }
        len = right - left + 1;
        maxLen = maxLen > len ? maxLen : len;
    }
    return maxLen;
}