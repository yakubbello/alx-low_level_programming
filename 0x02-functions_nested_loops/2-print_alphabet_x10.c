#include <stdio.h>

#include "main.h"
/**
 * print_alphabet_x10 - Prints the english alphabet on ten different lines
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
