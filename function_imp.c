#include "main.h"

/**
 * _function_imp - prints a formated string
 * @isa: array containing function names
 * @format: character string
 * @saf: varidic arguments list
 * Return: number of chars
 */
int _function_imp(const char *format, convert_t isa[], va_list saf)
{
	int f = 0, g = 0, fix, char_value;

	char_value = 0;
	for (; format[f] != '\0'; f++)
	{
		if (format[f] == '%')
		{
			for (; isa[g].xy != NULL; g++)
			{
				if (format[f + 1] == isa[g].xy[0])
				{
					fix = isa[f].l(saf);
					if (fix == -1)
						return -1;
					char_value += fix;
					break;
				}
			}
			if (isa[g].xy == NULL && format[f + 1] != ' ') 
			{
				if (format[f + 1] != '\0')
				{
					_putchr(format[f]);
					_putchr(format[f + 1]);
					char_value += 2;
				}
				else
					return -1;
			}
			f++;
		}
		else
		{
			_putchr(format[f]);
			char_value++;
		}
	}
	return (char_value);
}
