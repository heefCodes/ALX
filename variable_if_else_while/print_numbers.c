#include <stdio.h>

/**
  * main - prints all single digit numbers of base 10
  * starting from 0
  * Return: 0
  */

int main(void)
{
	unsigned int number;

	number = 0;
	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	return (0);
}
