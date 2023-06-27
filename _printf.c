#include "main.h"

/**
 *_printf - function that produces output according to a format
 *@format : character string
 *return: integer 0 (success)
 */
int _printf(const char *format, ...)
{
	int value = 0;
	va_list saf;

	va_start(saf, format);

	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			format++;
			if (*format == 'c')
			{
			int z = (va_arg(saf, int));

			_putchr(z);
			value++;
			}
			else if (*format == 's')
			{
				char *s = (va_arg(saf, char *));

				while (*s != '\0')
				{
					_putchr(*s++);
					s++;
					value++;
				}
			}
			else if ((*format == 'd') || (*format == 'i'))
			{
				int q = va_arg(saf, int);

				_putchr(q);
				value += _put_int(q);
			}
		}
		else if (*format == '%')
		{
			_putchr('%');
			value++;
		}
		else
		{
			_putchr(*format);
			value++;
		}
	}
	va_end(saf);

	return (value);
}
