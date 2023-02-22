#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - This function prints alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
