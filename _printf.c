#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format.
 * @format: string that contains format specifiers
 * @...: arguments passed to the function.
 * Return: number of charachters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int leng = 0;
		if (format == NULL)
			return (-1);
	va_start(args, format);
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'c':
							_putchar(va_arg(args, int);
							leng++;
							i += 2;
							break;
					case 's':
							leng +=  print_str(va_arg(args, char *);
							i += 2;
							break;
					case '%':
							_putchar('%');
							leng++;
							i += 2;
							break;
					default:
							_putchar('%');
							_putchar(format[i + 1]);
							leng += 2;
							i += 2;
				}
			}
			_putchar(format[i]);
			leng++;
			i++;
		}
		va_end(args);
		return (leng);
}
