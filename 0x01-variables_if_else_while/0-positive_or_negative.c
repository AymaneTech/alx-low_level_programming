#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Main: Prints a random number and states whether
 * it is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
