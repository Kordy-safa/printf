#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: integer
 */
int (*function_imp( char *str))(va_list, flags_t *)
{
	convert_t isa[] = {
		{"c", char_cons},
		{"s", string_cons},
		{"%", puts_percent},
		{"d", put_num},
		{"i", put_num},
		{"b", int_bin},
		{"u", unsigned_num_par},
		{"o", octal_int},
		{"x", hx_base},
		{"X", heX_base},
		{"r", reverse_str},
		{"R", rot13},
		{"p", prnt_addr},
		{"S", not_printablech},
		};
	int flags = 14;
	
	int d = 0;

	for(; d < flags; d++)
		if ((char *)isa[d].l == str)
			return (isa[d].l);

	return (NULL);
}
