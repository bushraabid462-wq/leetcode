char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    int index = 0;

    while (strs[0][index] != '\0') {
        char c = strs[0][index];

        // Compare this character with all strings
        for (int i = 1; i < strsSize; i++) {
            if (strs[i][index] != c || strs[i][index] == '\0')
                goto end;
        }
        index++;
    }

end:
    strs[0][index] = '\0';  // Cut the prefix at mismatch point
    return strs[0];
}
