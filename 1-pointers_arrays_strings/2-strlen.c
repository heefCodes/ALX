#include "main.h"

/**
  * _strlen - print length of a string
  * @s: string character
  *
  * Return: len
  */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
