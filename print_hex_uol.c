#include "main.h"

/**
 * print_hexa - prints a hex num in low or upp
 * @types: list of args
 * @map_to: array of values
 * @buffer: buffer array
 * @flags: calculate active flags
 * @flag_ch: same
 * @width: get_width
 * @precision: precision specifier
 * @size: size
 * Return: num of chars
 */

int print_hex(va_list types, char map_to[], char buffer[], int flags, char flag_ch, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	UNUSED(width);

	num = convert_size_unsigned(num, size);

	if (num == 0)
		buffer[i--] = '0';
	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = map_to[num % 16];
		num /= 16;
	}
	if (flags & F_HASH && init_num != 0)
	{
		buffer[i--] = flag_ch;
		buffer[i--] = '0';
	}

	i++;

	return (write_unsigned(0, i, buffer, flags, width, precision, size));
}
