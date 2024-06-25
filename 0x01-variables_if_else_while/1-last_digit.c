#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int n, m;

	srand(time(NULL));
	n = rand() - RAND_MAX % 2;

	m = abs(n) % 10;

	if (n == 0)
		printf("0\n");
	else if (m > 5)
		printf("last digit of %d is %d and is greater than 5", n, m);
	else if (m < 6 && m != 0)
		printf("last digit of %d is %d and is less than 6 and not 0", n,
		       m);
	return (0);
}
