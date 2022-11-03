#include <stdio.h>

/**
  * main - prints all letters except q and e
  *
  * Return: 0
  */

int main(void)
{
	char lower;

	lower = 'a';
	while (lower <= 'z')
	{
		if (lower != 'q' && lower != 'e')
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	return (0);
}
