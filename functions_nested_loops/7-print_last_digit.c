#include "main.h"

/**
  * print_last_digit - prints the last digit
  *
  * @n: argument parameter
  * Return: last digit
  */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	putchar('0' + (n % 10));

	return (n % 10);
}
