#include "main.h"
#include <stdarg.h>
/**
 * _printf - produces output according to a format.
 * @format: string that contains format specifiers
 * @...: arguments passed to the function.
 *Return: number of charachters printed.
 */
int _printf(const char *format, ...)
{
	if (!format)
	{
		return (-1);
	}

	va_list lists;

	va_start(lists, format);

	int i;
	int size = 0;
	char *str;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ')
			{
				i++;
			}
			if (format[i + 1] == '\0')
			{
				return (-1);
			}
			size += check_identifier(format, &i, lists);
		}
		else
		{
			_putchar(format[i]);
			size++;
		}
	}
	va_end(lists);
	return (size);
}
