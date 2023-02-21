#include <stdio.h>
#include "main.h"
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c [8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i = 0;

	for (; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
