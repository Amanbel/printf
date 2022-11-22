#include <stdio.h>
#include <stdarg.h>

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

void print_char(va_list args)
{
	printf("%c", (char) va_arg(args, int));
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", (float) va_arg(args, double));
}
