#include <stdio.h>

/**
 * main - Prints all base 10 single digit numbers from 0
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
	putchar('\n');
	return (0);
}
