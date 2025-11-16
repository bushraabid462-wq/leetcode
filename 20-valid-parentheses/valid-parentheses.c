bool isValid(char * s) {
    int length = strlen(s);
    char stack[length];
    int top = -1;

    for (int i = 0; i < length; i++) {
        char c = s[i];

        // Push opening brackets
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } 
        else {
            // If stack empty → invalid
            if (top == -1) return false;

            char topChar = stack[top--];

            // Check matching pairs
            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return false;
            }
        }
    }

    // Valid only if stack empty
    return top == -1;
}
