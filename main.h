#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
void print_string(va_list args);
void print_char(va_list args);
void print_float(va_list args);
void print_int(va_list args);
int _putchar(char c);

/**
 * struct pnt - a structure holding a character and a pointer to function
 * @c: charcter
 * @func: pointer to function
 */

typedef struct pnt
{
	char c;
	void (*func)(va_list);
} pnt;

#endif
