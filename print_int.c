#include <stdio.h>
#include "printf.h"

/**
 * print_int - prints integers
 * @n: int
 * Return: void
 */

void print_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		print_int(n / 10);
		_putchar((n % 10) + '0');
	}
}
