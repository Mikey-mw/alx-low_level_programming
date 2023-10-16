#include "main.h"

int _atoi(char *s) {
    int sign = 1; // Initialize sign as positive
    int result = 0;
    int i = 0;

    while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)) {
        i++; // Skip leading whitespace and control characters
    }

    if (s[i] == '-') {
        sign = -1; // Handle negative sign
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}
