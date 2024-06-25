#include <stdio.h>

int main(int argc, char *argv[])
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++) {
		if (letter == 'q' || letter == 'e')
			continue;

		putchar(letter);
	}
	putchar('\n');

	return (0);
}
