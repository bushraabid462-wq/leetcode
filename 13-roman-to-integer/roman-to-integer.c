int romanToInt(char * s) {
    int map[26] = {0};

    map['I' - 'A'] = 1;
    map['V' - 'A'] = 5;
    map['X' - 'A'] = 10;
    map['L' - 'A'] = 50;
    map['C' - 'A'] = 100;
    map['D' - 'A'] = 500;
    map['M' - 'A'] = 1000;

    int total = 0;
    int i = 0;

    while (s[i] != '\0') {
        int curr = map[s[i] - 'A'];

        int next = 0; 
        if (s[i + 1] != '\0') {
            next = map[s[i + 1] - 'A'];
        }

        if (next > curr) {
            total += next - curr;
            i += 2;
        } else {
            total += curr;
            i++;
        }
    }

    return total;
}
