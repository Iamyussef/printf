#include "main.h"
#include <stddef.h>

/**
 * print_str - prints the string passed
 * @str: string to be printed
 * Return: number of charachters printed.
 */

int print_str(char *str)
{
	int i = 0;
		if (str == NULL)
		{
			char *s = "(null)";
				while (s[i] != '\0')
				{
					_putchar(s[i]);
					i++;
				}
		}
		else
		{
				for (i = 0; str[i] != '\0'; i++)
					_putchar(str[i]);
		}
	return (i);
}
