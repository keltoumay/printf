#ifndef MAIN_H
#define MAIN_H

/** main.h - header file for custom printf implementation. */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

/* Print a string from the argument list at */
/* the specified position in the text body. */
int prnt_str(va_list args);

/* Print a character from the argument list at */
/* the specified position in the text body. */
int prnt_ch(va_list args);

/* Check the type of the argument and direct to the appropriate */
/* function for printing. */
int check_func(char id, va_list args);

/* Manage and print integers. */
int prnt_int(va_list args);
void set_int(int a, int *i);

/* The famous putchar function that prints a single character. */
/* Returns 1 for success, -1 for non-character. */
int _putchar(char c);

/* The main printf function that prints the formatted text.*/
/* Returns the number of characters printed. */
int _printf(const char *format, ...);

#endif
