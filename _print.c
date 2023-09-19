#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: integer
 */
int _printf(const char *format, ...)
{
	va_list lists;
	va_start(lists, format);

	int result;
	char *str;
	int i;
	int size1 = 0;
	int size2 = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == 37)
		{
			i++;
			switch (format[i])
			{
				case 'c':
					result = va_arg(lists, int);
					size1++;
					printcharacter(result);
					break;
				case 's':
					str = va_arg(lists, char*);
					size2 = _strlen(str);
					printstring(str);
					break;
				case '%':
					_putchar(format[i]);
					size1 += 1;
					break;
				default
					_putchar(format[i]);
				size += 1;
				break;
			}
		}
	}
	sum += size1 + size2;
	va_end(lists);
	return(sum);
}
