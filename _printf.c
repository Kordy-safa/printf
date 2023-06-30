#include "main.h"

/**
 *_printf - function that produces output according to a format
 *@format : character string
 *return: integer 0 (success)
 */
int _printf(const char *format, ...)
{
	int char_value = 0;
	va_list saf;
	convert_t isa[] = {
		{"c", _char_cons},
		{"s", _string_cons},
		{"%", _puts_percent},
		{"d", _put_num},
		{"i", _put_num},
		{"b", _binary_int},
		{"u", _unsigned_num_par},
		{"o", _octal_int},
		{"x", _hex_base},
		{"X", _heX_base},
		{"r", _reverse_str},
		{"R", _rot13},
		{NULL, NULL}
		};

	if (format == NULL)
		return (-1);

	va_start(saf, format);
	char_value = _function_imp(format, isa, saf);
	va_end(saf);

	return (char_value);
}
