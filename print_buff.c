#include "main.h"

/**
 * print_buffer - prints the contents of the buffer
 * @buffer: array of chars
 * @buff: index
 */

void print_buffer(char buffer[], int *buff)
{
	if (*buff > 0)
		write(1, &buffer[0], *buff);

	*buff = 0;
}
