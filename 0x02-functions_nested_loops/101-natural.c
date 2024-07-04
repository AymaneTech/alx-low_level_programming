#include <stdio.h>

int main()
{
	int i, sum;
	for (i = 0; i < 1024; i++) {

		if (i % 3 != 0 || i % 5 != 0)
			continue;

		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
