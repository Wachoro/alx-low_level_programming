#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /;
	if (n > 0)
		printf("%d is a positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
