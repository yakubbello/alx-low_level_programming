#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print natural numbers from a vaue n to 98
 * @n: starting range of the printed natural numbers
 *
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}

			if (i == 98)
			{
				printf("%d", i);
			}
		}
	} else if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}

			if (i == 98)
			{
				printf("%d", i);
			}
		}
	}
	printf("\n");
}
