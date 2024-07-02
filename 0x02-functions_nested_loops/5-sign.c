#include "main.h"

int print_sign(int c)
{
	if (c == 0) {
		_putchar('0');
		return 0;
	}
	if (c < 0) {
		_putchar('-');
		return -1;
	}
	_putchar('+');
	return 1;
}
