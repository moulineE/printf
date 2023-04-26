#ifndef main_h
#define main_h
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct sp - Struct sp
 *
 * @sp: The specifier
 * @f: The function associated
 */
typedef struct sp
{
	char *sp;
	int (*f)();
} sp_t;

int _printf(const char *format, ...);
int _putchar(char c);
int putdigit(va_list ap);
int putint(va_list ap);
int printchar(va_list ap);
int _strlen(char *s);
int printf_string(va_list ap);
int getfunc(char *sp, va_list ap);
int put2sp(void);
int PrintBinary(va_list ap);
char *convert(unsigned long int num, int base);
int PrintOctal(va_list ap);
int print_unsigned(va_list ap);
int print_hex(va_list ap);
char *convert_hex(unsigned long int num, int base, int l);



#endif
