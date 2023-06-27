#include "main.h"

/**
 *_printf - function that produces output according to a format
 *@format : character string
 *return: integer 0 (success)
 */
int _printf(const char *format, ...)
{
	int value = 0, i = 0;
	va_list saf;

	va_start(saf, format);

	for (;format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			if (format[i + 1] == 'c')
			{
			int z = (va_arg(saf, int));

			_putchr(z);
			i++;
			}
			else if (format[i + 1] == 's')
			{
				char *s = (va_arg(saf, char *));

				while (*s != '\0')
				{
					_putchr(*s++);
					s++;
					i++;
				}
			}
			else if ((format[i + 1] == 'd') || (format[i + 1] == 'i'))
			{
				int q = va_arg(saf, int);

				_putchr(q);
				value += _put_int(q);
			}
		}
		else if (format[i + 1] == '%')
		{
			_putchr('%');
			i++;
		}
		else
		{
			_putchr(format[i + 1]);
			i++;
		}
		value =+ 1;
	}
	va_end(saf);

	return (value);
}
