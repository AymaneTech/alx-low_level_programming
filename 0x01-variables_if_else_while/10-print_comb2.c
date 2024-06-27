#include <stdio.h>

int main(int argc, char *argv[])
{
	int digit_1, digit_2;

	for (digit_1 = 0; digit_1 < 10; digit_1++) {
		for (digit_2 = 0; digit_2 < 10; digit_2++) {
			putchar(digit_1 % 10 + '0');
			putchar(digit_2 % 10 + '0');

			putchar(',');
			putchar('\n');
		}
		putchar('\n');
	}

	return (0);
}
