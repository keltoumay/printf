#include "main.h"
/**
 * main - Entry point
 *
 * Return: int .
 */

int  main(void)
{
int len = 0;
int len1 = 0;

len =  _printf("Let's try to printf a simple sentence.\n");
len1 = _printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
_printf("Length:[%d, %i]\n", len1, len);
printf("Length:[%d, %i]\n", len, len1);
_putchar('\n');
return (0);
}
