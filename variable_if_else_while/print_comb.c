#include <stdio.h>
/**
  * main - prints all possible combinations of
  * single digit numbers
  * Return: 0
  */

int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
