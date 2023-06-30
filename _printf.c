#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: integer
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
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
=======
        int q = 0;
	va_list saf;
       	va_start(saf, format);

	for (; *format != '\0';)
	{
		if (*format == '%')
		{
			format++;
		switch (*format)
		{
			case 'c':
			{
                    int c = va_arg(saf, int);
                    putchar(c);
                    q++;
                    break;
                }
			case 's':
			{
                    const char *s = va_arg(saf, const char *);
                    while (*s != '\0')
                    {
                        putchar(*s);
                        s++;
                        q++;
                    }
                    break;
                }
			case '%':
                {
                    _putchr('%');
                    q++;
                    break;
                }
		case 'd':
                case 'i':
                {
                    int w = va_arg(saf, int);
                    printf("%d", w);
                    q++;
                    break;
                }
		case 'u':
                {
                        unsigned int w  = va_arg(saf, unsigned int);
                        printf("%u", w);
                        q++;
                        break;
                }
                case 'o':
                {
                        unsigned int w = va_arg(saf, unsigned int);
                        printf("%o", w);
                        q++;
                        break;
                }
		case 'x':
                {
                        unsigned int w  = va_arg(saf, unsigned int);
                        printf("%x", w);
                        q++;
                        break;
		}
                case 'X':
                {
                        unsigned int w = va_arg(saf, unsigned int);
			printf("%X", w);
		        q++;
			break;
		}
		case 'r':
                {
                         void *isa = va_arg(saf, void *);
			 uintptr_t isa_value = (uintptr_t)isa;
			 printf("%p", (void *)isa_value);
			 q++;
			 break;
                }
		default:
		break;
                }
		}
		else
        {
            _putchr(*format);
	    q++;
        }

        format++;
    }

    va_end(saf);

return (0);
>>>>>>> 2b4ff603db66229847d4bf63bc257423409b8f65
}
