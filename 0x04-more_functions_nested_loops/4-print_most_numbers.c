#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 36; n < 46; n++)
	{
		if ((n == 38) || (n == 40))
		{
			continue;
		}
		putchar(n);
	}
	putchar(10);
}
