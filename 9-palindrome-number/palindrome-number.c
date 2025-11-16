bool isPalindrome(int x) {
    if (x < 0) return false;   // negative numbers are not palindrome

    long rev = 0;
    int original = x;

    while (x != 0) {
        int digit = x % 10;
        rev = rev * 10 + digit;
        x /= 10;
    }

    return (rev == original);
}
