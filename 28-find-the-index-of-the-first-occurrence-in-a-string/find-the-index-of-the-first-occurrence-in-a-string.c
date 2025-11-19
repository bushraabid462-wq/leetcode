int strStr(char * haystack, char * needle) {
    if (needle[0] == '\0')
        return 0;  // empty needle is always found at index 0

    int hLen = strlen(haystack);
    int nLen = strlen(needle);

    if (nLen > hLen)
        return -1;

    for (int i = 0; i <= hLen - nLen; i++) {
        int j = 0;

        while (j < nLen && haystack[i + j] == needle[j]) {
            j++;
        }

        if (j == nLen)
            return i;  // match found
    }

    return -1;  // no match
}
