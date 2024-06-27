#include <stdio.h>

char digit(int digit) { return digit % 10 + '0'; }

int main(int argc, char *argv[])
{
	int a, b, c;

	for (a = 0; a < 9; a++) {
		for (b = a + 1; b <= 9; b++) {
			for (c = b + 1; c <= 9; c++) {
				if (digit(a) == digit(b) ||
				    digit(a) == digit(c) ||
				    digit(b) == digit(c))
					continue;

				putchar(digit(a));
				putchar(digit(b));
				putchar(digit(c));

				if (digit(a) == 9 && digit(b) == 9 &&
				    digit(c) == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	return (0);
}
