#include "main.h"

/**
 *_printf - function that produces output according to a format
 *@format : character string
 *return: integer
 */

int _printf(const char *format, ...)
{
       unsigned int q = 0, s_value = 0;
       va_list saf;

for (;format[q] != '\0'; q++)
 {
 if (format [q] != '%')
 {
  _putchr(format[q]);
 }
 else if (format[q+1] == 'c')
                {
                        _putchr(va_arg(saf, int));
                        q++;
                }
 else if (format[q+1] == 's')
                {
                        int s_val = _put_str(va_arg (saf, char *));
                        q++;
                        s_value += s_val;
                }
 else if (format[q+1] == '%')
                {
                        _putchr('%');
                        q++;
                }
 else if ((format[q+1] == 'd') || (format[q+1] == 'i'))
                {
                        s_value += _put_int(va_arg(saf, int));
                        q++;
                }
 s_value += 1;
}

return (0);
}
