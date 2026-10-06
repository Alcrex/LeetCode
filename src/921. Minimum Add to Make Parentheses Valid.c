int minAddToMakeValid(char* s) {
    int open_count = 0;
    int add_count = 0;

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == '('){
            open_count++;
        }
        else if (s[i] == ')'){
            if(open_count > 0){
                open_count--;
            }else{
                add_count++;
            }
        }
    }
    return add_count + open_count;
}