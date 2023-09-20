#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - produces output according to a format.
 * @format: string that contains format specifiers
 * @...: arguments passed to the function.
 * Return: number of charachters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int leng = 0;
		if (format == NULL)
			return (-1);
	va_start(args, format);
		while (*format != '\0')
		{
			if (*format == '%')
			{
				format++;
				switch (*format)
				{
					case 'c':
							leng += _putchar(va_arg(args, int));
							format++;
							break;
					case 's':
							leng += print_str(va_arg(args, char *));
							format++;
							break;
					case 'd':
					case 'i':

							leng += print_int(va_arg(args, int));
							format++;
							break;
					case '%':
							if (format[1] == '%' && format[2] == '\0')
							{
								_putchar('%');
								format += 2;
								leng++;
							}
							break;

					default:
							_putchar('%');
							_putchar(*format);
							leng += 2;
							format++;
				}
			}
			_putchar(*format);
			leng++;
			format++;
		}
		va_end(args);
		return (leng);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
