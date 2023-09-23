#include <stdio.h>
#include "main.h"

/**
 * print_int - prints integers
 * @n: int
 * Return: void
 */

int print_int(int n)
{
	int i = 0;
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
			i++;
		}
	return (i);

}
