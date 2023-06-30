#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/**
 * convert_t - defines  structure for fuctions and symbols
 *
 * @y: the operator
 * @f: the function associated
 */
typedef struct {
       char *y;
       int (*l)(va_list saf, flags_t *l);
} convert_t;

/**
 * struct flags - struct containing flags to initiated
 * incase a flag specifier is passed to _printf()
 * @ds: flag for the '+' character
 * @cf: flag for the ' ' character
 * @kt: flag for the '#' character
 */
typedef struct flags
{
	int ds;
	int cf;
	int kt;
} flags_t;

int _printf(const char *format, ...);
int _flag_src(char y, flags_t *l);
int (*function_imp( char *str))(va_list, flags_t *);
int _reverse_str(va_list saf, flags_t *l);
int _rot13(va_list saf,__attribute__((unused))flags_t *l);
char *convert(unsigned long int y, int bs, int lw_cs);
int _hex_base(va_list saf, flags_t *l);
int _heX_base(va_list saf, flags_t *l);
int int_bin(va_list saf,__attribute__((unused))flags_t *l)
int _octal_int(va_list saf, flags_t *l);
int _not_printablech(va_list saf, flags_t *l);
int _prnt_addr(va_list saf, flags_t *l);
int _put_unsigned_int(unsigned int q);
int _put_int(int x);
int _int_count;
int _put_num(va_list saf, flags_t *l);
int _unsigned_num_par(va_list saf, flags_t *l);
int _puts_percent(__attribute__((unused))va_list saf, flags_t *l);
int _string_cons(va_list saf,__attribute__((unused))flags_t *l);
int _char_cons(va_list saf, flags_t *l);
int _pts(char *s);
int _putchr(char z);
char *str_rev(char *s);
void _stdout_str(char *s);
char *_memcpy(char *dest, char *src, unsigned int x);

#endif
