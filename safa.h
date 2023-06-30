#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include <unistd.h>
#include <stdarg.h>
<<<<<<< HEAD
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * convert_t - defines  structure for fuctions and symbols
 *
 * @xy: the operator
 * @f: the function associated
 */
typedef struct {
       const char *xy;
       int (*l)(va_list);
} convert_t;

=======
#include<stdint.h>
>>>>>>> 2b4ff603db66229847d4bf63bc257423409b8f65
int _printf(const char *format, ...);
int _putchr(char z);
int _put_unsigned_int(unsigned int q);
int _function_imp(const char *format, convert_t isa[], va_list saf);
int _put_int(va_list saf);
int _rot13(va_list saf);
int _reverse_str(va_list saf);
unsigned int _cal_oct_num(unsigned int x, int b);
char *str_rev(char *s);
char *_memcpy(char *dest, char *src, unsigned int x);
void _stdout_str(char *s);
int _puts_percent(va_list saf);
int _string_cons(va_list saf);
int _char_cons(va_list saf);
int _unsigned_num_par(va_list saf);
int _put_num(va_list saf);
int _binary_int(va_list saf);
int _octal_int(va_list saf);
int _heX_base(va_list saf);
int _hex_base(va_list saf);
char *_intbs_con(unsigned long int y, int bs, int lw_cs);
int _pts(char *s);

#endif
