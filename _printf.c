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
	Arraycon isa[] = {
		{"c", char_cons},
		{"s", string_cons},
		{"%", puts_percent},
		{"d", Integer_base10},
		{"i", Integer_base8},
		{"b", unsigned_binary},
		{"u", unsigned_int},
		{"o", puts_octal},
		{"x", hex_lowercase},
		{"X", hex_Uppercase},
		{"r", reverse_string},
		{"R", rot13},
		{NULL, NULL}
		};

	if (format == NULL)
		return (-1);

	va_start(saf, format);
	char_value = _function_imp(format, isa, saf); 
	va_end(saf);

	return (char_value);
}
