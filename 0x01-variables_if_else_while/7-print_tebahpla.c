#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);

	putchar('\n');
	return (0);
}
