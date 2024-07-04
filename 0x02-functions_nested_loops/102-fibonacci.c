#include <stdio.h>

int main()
{
	int	 counter = 0;
	long int a = 1, b = 2, next;

	while (counter < 50) {
		if (counter == 0)
			printf("%ld", a);
		else if (counter == 1)
			printf(", %ld", b);
		else {
			next = a + b;
			a = b;
			b = next;
			printf(", %ld", next);
		}
		counter++;
	}
	printf("\n");

	return 0;
}
