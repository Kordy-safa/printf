#include "main.h"

int _putchr(char z)
{
        return write(1, &z, 1);
}
