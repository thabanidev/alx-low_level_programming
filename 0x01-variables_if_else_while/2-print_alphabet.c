#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);

	putchar('\n');
	return (0);
}
