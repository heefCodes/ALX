#include "main.h"

/**
  * print_sign - prints sign of a number
  * @n: sign
  *
  * Return: 1 if n greater than 0, 0 if n is zero
  * and -1 if n is less than zero
  */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
