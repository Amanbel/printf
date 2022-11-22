#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int i, key, j;
	const char *ptr;

	va_list args;

	int len = strlen(format);

	ptr = format;
	key = 0;	
	pnt test_c[2] = {{'c', print_char}, {'s', print_string}};

	va_start(args, format);
	
	if (format != NULL)
	{
		for (i = 0; i < len; i++)
		{
			/*if (ptr[i] == "\\")
			{
				if (ptr[i + 1] != 'n')
				{
					putchar(format[i + 1]);
					continue;
				}*/
			if (ptr[i] == '%')
			{
				i++;
				while (key < 2)
				{
					if (test_c[key].c == ptr[i])
					{
						test_c[key].func(args);
					}
					key++;
				}
				key = 0;
				continue;
			}
			putchar(ptr[i]);
		}
	}
	va_end(args);
	return (0);
}
