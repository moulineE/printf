#include "main.h"
/**
 * getfunc - function that selects the correct function to convert tge format
 * @sp: the specifier used to specify the correct format
 * @ap: the list of argument
 *
 * Return: the correct fonction
 */
int getfunc(char *sp, va_list ap)
{
	sp_t ssp[] = {
	{"d", putdigit},
	{"i", putint},
	{"c", printchar},
	{"s", printf_string},
	{"%", put2sp},
	{"b", PrintBinary},
	{NULL, NULL},
	};
	int i = 0;

	while (ssp[i].sp != NULL)
	{
		if (*(ssp[i].sp) == *sp)
		{
			return (ssp[i].f(ap));
		}
		i++;
	}
	return (0);
}
