#include <stdio.h>
#include <string.h>

int scoreOfParentheses(char* s) {
    int n = strlen(s);
    int stack[60];
    int top = -1;

    stack[++top] = 0;

    for (int i = 0; i < n; i++){
        if (s[i] == '('){
            stack[++top] = 0;
        }else{
            int v = stack[top--];
            int cur_socre = (v == 0) ? 1 : 2 * v;
            stack[top] += cur_socre;
        }
    }
    return stack[top];
}