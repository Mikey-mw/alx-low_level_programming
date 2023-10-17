#include "main.h"

void puts_half(char *str) {
	int length = _strlen(str);
	int start = length % 2 == 0 ? length / 2 : (length - 1) / 2;
	for (int i = start; i < length; i++) {
	_putchar(str[i]);
	}
	_putchar('\n');
}
