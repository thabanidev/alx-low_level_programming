#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n++);
	}

	n = 'a';
	while (n <= 'f')
		putchar(n++);

	putchar('\n');
	return (0);
}
