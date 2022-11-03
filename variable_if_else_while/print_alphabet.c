#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * Return: 0
 */

int main(void)
{
	char lower;

	lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}
