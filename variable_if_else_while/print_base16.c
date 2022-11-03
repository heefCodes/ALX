#include <stdio.h>

/**
  * main - prints all numbers of base 16 in lowercase
  * Return: 0
  */

int main(void)
{
	char num;
	char alpha;

	num = '0';
	alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
