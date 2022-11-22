#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - prints string to standard output
 * @args: input string
 * Return: Nothing
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_char - prints char to standard output
 * @args: input char
 * Return: Nothing
 */

void print_char(va_list args)
{
	printf("%c", (char) va_arg(args, int));
}

/**
 * print_int - prints integer to standard output
 * @args: input int
 * Return: Nothing
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints float to standard output
 * @args: input float
 * Return: Nothing
 */

void print_float(va_list args)
{
	printf("%f", (float) va_arg(args, double));
}
