#include "main.h"

/**
 *_printf - function that produces output according to a format
 *@format : character string
 *return: integer 0 (success)
 */
int _printf(const char *format, ...)
{
	unsigned int q = 0, value = 0;
	va_list saf;

	va_start(saf, format);

	for (; format[q] != '\0'; format++)
	{
		if (format[q] != '%')
		{
			if (format[q + 1] == 'c')
			{
			int z = (va_arg(saf, int));

			_putchr(z);
			q++;
			}
		else if (format[q + 1] == 's')
		{
			char *s = (va_arg(saf, char *));

			while (*s != '\0')
			{
				_putchr(*s++);
				s++;
				q++;
			}
		}
		}
		else if (format[q + 1] == '%')
		{
			_putchr('%');
			q++;
		}
		else
		{
			_putchr(format[q + 1]);
			q++;
		}
		value++;
	}
	va_end(saf);

	return (value);
}
