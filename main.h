#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>

/**
 * convert_t - defines  structure for fuctions and symbols
 *
 * @xy: the operator
 * @f: the function associated
 */
typedef struct {
       const char *xy
       int (*l)(va_list);
} convert_t;

int _printf(const char *format, ...);
int _putchr(char z);
int _put_int(unsigned int q);
int _function_imp(const char *format, convert_t isa[], va_list saf);
int _put_int(va_list saf);


#endif
