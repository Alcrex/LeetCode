#include <string.h>

char* removeOuterParentheses(char* s) {
    int depth = 0;
    int len = 0;

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == '('){
            if (depth > 0){
                s[len++] = '(';
            }
            depth++;
        }else{
            depth--;
            if(depth>0){
                s[len++] = ')';
            }
        }
    }
    s[len] = '\0';
    return s;
}