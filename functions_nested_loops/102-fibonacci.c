#include <stdio.h>

/**
  * main - prints the first 50 fibonacci numbers
  *
  * Return: 0
  */

int main(void)
{
	int n;
	int fibo;

	for (n = 0; n <= 50; n++)
	{
		if (n == 0 || n == 1)
		{
			printf("%d, ", n);
		}
		else
		{
			fibo = (n - 1) + (n - 2);
			printf("%d, ", fibo);
		}
	}
	printf("\n");
	return (0);
}
