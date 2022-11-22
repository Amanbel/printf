#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
void print_string(va_list args);
void print_char(va_list args);
void print_float(va_list args);
void print_int(va_list args);

typedef struct pnt
{
	char c;
	void (*func)(va_list);
} pnt;

#endif
