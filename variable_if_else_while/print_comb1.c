#include <stdio.h>

/**
  * main - prints all possible combinations of
  * two digits number
  * Return: 0
  */

int main(void)
{
	int num1;
	int num2;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '1'; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);
			
			if (num1 != '8' || num2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}