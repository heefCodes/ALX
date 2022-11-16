#include "main.h"

/**
  * swap_int - swap two integers
  * @a: first paramater
  * @b:second parameter
  * Return: nothing
  */

void swap_int(int *a, int *b)
{
	int first, second;

	second = *a;
	first = *b;

	*a = first;
	first = *b;
	*b = second;

}
