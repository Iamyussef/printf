#ifndef MAIN_H
#define  MAIN_H

int _printf(const char *format, ...);

#include <unistd.h>
#include <stdarg.h>

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

/**
 * printstr - prints a string
 * @s: a pointer to a string to be printed
 * Return: a pointer to the length of a string printed
 */
int printstr(const char *s)
{
	int i;
	char *str;

	str = "(null)";
	if (s == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
	}
	return (i);
}

int check_identifier(const char *format, int *i, va_list lists)
{
	int size = 0;
	char *str;

	switch (format[*i + 1])
	{
		case 'c':
			_putchar(va_arg(lists, int));
			size++;
			(*i)++;
			break;
		case 's':
			str = va_arg(lists, char *);
			size += printstr(str);
			(*i)++;
			break;
		case '%':
			_putchar('%');
			size++;
			(*i)++;
			break;
		default:
			_putchar(format[*i]);
			size++;
			break;
	}
	return (size);
}

#endif /* MAIN_H */
