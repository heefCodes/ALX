#include "main.h"

/**
  * print_line - print a straight line
  *
  * @n: number of character to print
  *
  * Return: nothing
  */

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
