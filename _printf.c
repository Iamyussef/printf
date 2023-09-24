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
#include "main.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int len_1 = 0, len_2 = 0;

	/* ===========> %c <=========== */
	printf("----------------------\n");
	printf("----> CHAR CASES <----\n");
	printf("----------------------\n");
	len_1 = printf("Expected output:    %c\n", 53);
	len_2 = _printf("Current output:     %c\n", 53);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %cc\n", 'a');
	len_2 = _printf("Current output:     %cc\n", 'a');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %cAAA\n", 'a');
	len_2 = _printf("Current output:     %cAAA\n", 'a');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %yd\n");
	len_2 = _printf("Current output:     %yd\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %c\n", '\0');
	len_2 = _printf("Current output:     %c\n", '\0');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %%%c\n", 'y');
	len_2 = _printf("Current output:     %%%c\n", 'y');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	/* ===========> %s <=========== */
	printf("----------------------\n");
	printf("---> STRING CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("Expected output:    %s\n", "Morocco");
	len_2 = _printf("Current output:     %s\n", "Morocco");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %s$\n", "");
	len_2 = _printf("Current output:     %s$\n", "");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %s$\n", NULL);
	len_2 = _printf("Current output:     %s$\n", NULL);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %s\n", "hello, world");
	len_2 = _printf("Current output:     %s\n", "hello, world");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %sForLife\n", "Morocco");
	len_2 = _printf("Current output:     %sForLife\n", "Morocco");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	/* ===========> % <=========== */
	printf("----------------------\n");
	printf("-> PERCENTAGE CASES <-\n");
	printf("----------------------\n");
	len_1 = printf("Expected output:    %%\n");
	len_2 = _printf("Current output:     %%\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %%%%%%\n");
	len_2 = _printf("Current output:     %%%%%%\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected output:    ");
	len_1 = printf("%");
	printf("\n");
	printf("Current output:     ");
	len_2 = _printf("%");
	printf("\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected output:    ");
	len_1 = printf("%   ");
	printf("\n");
	printf("Current output:     ");
	len_2 = _printf("%   ");
	printf("\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected output:    ");
	len_1 = printf("test%");
	printf("\n");
	printf("Current output:     ");
	len_2 = _printf("test%");
	printf("\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected output:    ");
	len_1 = printf("%  s", "valid format");
	printf("\n");
	printf("Current output:     ");
	len_2 = _printf("%  s", "valid format");
	printf("\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	return (0);
}
