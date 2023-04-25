#include "main.h"
/**
 * getfunc - function that selects the correct function to convert tge format
 * @sp: the specifier used to specify the correct format
 *
 * Return: the correct fonction
 */
int (*getfunc(char *sp)(va_list))
{
	sp_t ssp[] = {
	{"d", putdigit},
	{"i", temp},
	{"c", temp},
	{"s", temp},
	{"%", temp},
	{NULL, NULL},
	};
	int i = 0;
	
	while (ops[i].op != NULL)
	{
		if (*(ssp[i].sp) == *sp)
		{
			return (ssp[i].f);
		}
		i++;
	}
	return (ssp[i].f);
}