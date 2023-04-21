#ifndef VARD_H
#define VARD_H
#include <stdarg.h>
/**
 * struct datatype - struct datatype
 * @letter :format letter
 * @func: function pointer to print a type of argument
 */

typedef struct datatype
{
	char letter;
	void (*func)(va_list);
} datatype;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);
void print_all(const char * const format, ...);

#endif
