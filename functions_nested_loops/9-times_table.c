#include "main.h"
/**
  * times_table - prints the 9 times table, starting with 0
  *
  * Return: nothing
  */

void times_table(void)
{
	int row;
	int column;
	int product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = (row * column);
			putchar('0' + product);
			putchar(',');
			putchar(' ');
			putchar('0' + product);
		}
	}
	putchar('\n');
}
