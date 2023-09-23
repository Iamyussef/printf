#ifndef MAIN_H
#define MAIN_H
<<<<<<< HEAD
#include <unistd.h>

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
 * _strlen - calculates the length of a string
 * @str: a pointer to a string
 * Retturn: the length
 */
int _strlen(const char *str)
{
	int length = 0;

	for(i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
/**
 * printstring - prints a string
 * @str: pointer to string
 * Return: void
 */
int printstr(char *str)
{
	char *str;
	str = "(null)";
	int i;
	int b;
	if (s == NULL)
	{
		for (b = 0; str[b] != '\0'; i++)
		{
			_putchar(str[b]);
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

int _print(const char *format, ...);

#endif /* MAIN_H */

=======

int print_int(int n);
int _printf(const char *format, ...);
int print_str(char *str);
int _putchar(char c);




#endif
>>>>>>> 47e0b1fb35d3f51ea256578f83173889afcfcb6b
