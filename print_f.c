#include "main.h"

/**
 * _printf - duplicate printf function
 * @format: input string
 * Return: chars
 */

int _printf(const char *format, ...)
{
	int i, prntd = 0, prntd_ch = 0;
	int flags, width, precision, size, buff = 0;
	va_list args;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff++] = format[i];
			if (buff == BUFF_SIZE)
				print_buffer(buffer, &buff);
			prntd_ch++;
		}
		else
		{
			print_buffer(buffer, &buff);
			flags = get_flags(format, &i);
			width = get_width(format, &i);
			precision = get_precision(format, &i, args);
			size = get_size(format, &i);
			++i;
			prntd = handle_print(format, &i, args, buffer,
					flags, width, precision, size);
			if (prntd == -1)
				return (-1);
			prntd_ch += prntd;
		}
	}

	print_buffer(buffer, &buff);

	va_end(args);

	return (prntd_ch);
}
