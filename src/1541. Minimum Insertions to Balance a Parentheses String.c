int minInsertions(char *s){
    int ans = 0, right = 0, i = 0;

    while (s[i] != '\0'){
        if (s[i] == '('){
            right += 2;

            if (right % 2 != 0){
            ans++;
            right--;
        }
        }else{
            right--;
            if (right < 0){
                ans++;
                right = 1;
            }
        }
        i++;
    }
    return ans + right;
}