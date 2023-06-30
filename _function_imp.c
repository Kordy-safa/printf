#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: integer
 */
int (*function_imp( char *str))(va_list, flags_t *)
{
	convert_t isa[] = {
		{"c", _char_cons},
		{"s", _string_cons},
		{"%", _puts_percent},
		{"d", _put_num},
		{"i", _put_num},
		{"b", int_bin},
		{"u", _unsigned_num_par},
		{"o", _octal_int},
		{"x", _hex_base},
		{"X", _heX_base},
		{"r", _reverse_str},
		{"R", _rot13},
		{"p", _prnt_addr},
		{"S", _function_imp.c},
		};
	int flags = 14;
	
	int d = 0;

	for(; d < flags; d++)
		if (isa[d].c == str)
			return (isa[d].l);

	return (NULL);
}
