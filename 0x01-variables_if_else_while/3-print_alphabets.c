#include <stdio.h>

/**
 * main - Prints lowercase then uppercase alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);

	c = 'A';

	while (c <= 'Z')
		putchar(c++);

	putchar('\n');
	return (0);
}
