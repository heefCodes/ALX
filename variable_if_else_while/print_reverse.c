#include <stdio.h>
/**
  * main - prints alphabets in reverse order
  * Return: 0
  */

int main(void)
{
	char reverse;

	reverse = 'z';
	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}
	putchar('\n');
	return (0);
}
