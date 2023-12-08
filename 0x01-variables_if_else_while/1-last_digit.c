#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program that prints the last digit of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last;
	char *res;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
		res = "is greater than 5\n";
	else if (last == 0)
		res = "is 0\n";
	else
		res = "is less than 6 and not 0\n";

	printf("Last digit of %d is %d and %s", n, last, res);
	return (0);
}
