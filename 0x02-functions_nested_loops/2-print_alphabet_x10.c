#include "main.h"

void pirnt_alphabet_x10()
{
	int  counter = 0;
	char letter;

	while (counter++ <= 9) {
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
