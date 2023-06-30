#include "main.h"

/**
 * _function_imp - prints a formated string
 * @isa: array containing function names
 * @format: character string
 * @saf: varidic arguments list
 * Return: number of chars
 */
int _printf(const char *format, ...)
{
	int (*fnc_py)(va_list, flags_t *)
	const char *s;
	va_list saf;
	flags_t flags = {0, 0, 0};

	int char_value = 0;

	va_start(saf, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (s = format; *s; s++)
	{
		if (*s == '%')
		{
			s++;
			if (*s == '%')
			{
				char_value += _putchr('%');
				continue;
			}
			while (_flags_src(*s, &flags))
				s++;
			fnc_py = function_imp(*s);
			char_value += (fnc_py)
			? fnc_py(saf, &flags)
			: _printf("%%%c", *s);
		}
		else
			char_value += _putchr(*s);
	}
	_putchr(-1);
	va_end(saf);

	return (char_value);

}
