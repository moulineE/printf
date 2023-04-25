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
	int (*f)(char *a);
} sp_t;

int putdigit(va_list ap);
int putint(va_list ap);
int printchar(va_list ap);
int _strlen(char *s);
int printf_string(va_list ap);
int (*getfunc(char *sp))(va_list);

#endif
