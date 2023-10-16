#include "main.h"

void print_array(int *a, int n) {
    for (int i = 0; i < n; i++) {
        _putchar(a[i] + '0'); // Assuming the integers are single-digit
        if (i < n - 1) {
            _putchar(',');
            _putchar(' ');
        }
    }
    _putchar('\n');
}
