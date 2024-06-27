#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < 9; i++) {
		for (j = i + 1; j <= 9; j++) {

			if (i % 10 + '0' == j % 10 + '0')
				continue;

			putchar(i % 10 + '0');
			putchar(j % 10 + '0');

			if (i % 10 == 9 && j % 10 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
