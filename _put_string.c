#include "main.h"

int _put_str(char *str)
{
        int index = 0, s_val = 0;

        if (str)
        {
                while (str[index] != '\0')
                {
                       _putchr(str[index]);
                        s_val += 1;
                        index++;
                }
        }
        return (s_val);
}
