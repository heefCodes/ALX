#include "main.h"

/**
  * print_alphabet_x10 - prints a-z 10 times
  *
  * Return: nothing
  */

void print_alphabet_x10(void)
{
	char alpha;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
	}
	putchar('\n');
}
