#ifndef MAIN_H
#define MAIN_H
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
void printstring(char *str)
{
	int i = 0;
	char *ptr;
	int size = 0;
	
	if (; i < size; i++)
	{
		_putchar(str[i]);
	}
}

int _print(const char *format, ...);

#endif /* MAIN_H */

