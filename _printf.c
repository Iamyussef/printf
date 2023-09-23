#include "main.h"
#include <stdarg.h>
/**
 * _printf - produces output according to a format.
 * @format: string that contains format specifiers
 * @...: arguments passed to the function.
 *Return: number of charachters printed.
 */
int _printf(const char *format)
{
	va_list lists;
	va_start(lists, format);
	int i;
	int size = 0;
	char *str;

	if (format == NULL)
	{
		return (-1);
	}
	for (format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ')
			{
				i++;
			}
		}
		switch (format[i + 1])
		{
			case 'c':
				_putchar(va_arg(lists, int));
				size++;
				i++;
				break;
			case 's':
				str = va_arg(lists, char *);
				size += printstr(str);
				i++;
				break;
			case '%':
				_putchar('%');
				size++;
				i++;
				break;
			case '\0':
				return (-1);
			default:
				_putchar(format[i];
						size++;
						break;
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
