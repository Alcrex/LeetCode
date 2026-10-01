#include <stdbool.h>

bool isValid(char* s) {
    char stack[10000];
    int top = 0;

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == '(' || s[i] == '[' || s[i] == '{'){
            stack[top++] = s[i];
        }

        else {
            if (top == 0)
                return false;

            char c = stack[--top];

            if (s[i] == ')' && c != '(')
                return false;
            if (s[i] == ']' && c != '[')
                return false;
            if (s[i] == '}' && c != '{')
                return false;
        }
    }

    return top == 0;
}