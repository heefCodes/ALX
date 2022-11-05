#include "main.h"

/**
  * print_alphabet - prints alphabet in lowercase, followed
  * by new line
  *
  * Return: nothing
  */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
