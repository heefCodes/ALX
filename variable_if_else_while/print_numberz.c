#include <stdio.h>
/**
  * main - prints all single digit numbers of base 10 starting
  * from 0 using putchar
  * Return: 0
  */

int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
