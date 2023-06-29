#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: character string
 * Return: integer
 */
int _printf(const char *format, ...)
{
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
}
