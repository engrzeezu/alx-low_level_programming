#include "main.h"

/**
 * print_rev - Prints a string in reverse form
 * @s: The string to print in the revers form 
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
