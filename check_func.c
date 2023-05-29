#include "main.h"

/*** this project done with Fatiha boutalount - Keltouma Ouyahia .***/

/**
 * check_func - manage switch cases
 * @id : first argument
 * @args : second argument
 *
 * Return: integer
 */

int check_func(char id, va_list args)
{
int i = 0;

/* the fuction printf takes you her if the format is not a regulare text*/
/* to print the arlist , it depens on the type*/
/* of argument that spesefied by the user.*/
/* the user spesesier the type by print '%'*/
/*and a character of a sign.*/

switch (id)
{
/* If the character is 'c', it calls the function for character type */
case 'c':
i += prnt_ch(args);
break;
/* If the character is 's', it calls the function for string type */
case 's':
i += prnt_str(args);
break;
/* If the character is '%', it simply prints '%' */
case '%':
i += _putchar('%');
break;
case 'd':
/* If the character is 'd' or 'i', it calls the function for integer type */
case 'i':
i += prnt_int(args);
break;
/* If the user specifies any other character, */
/* it prints '%' followed by that character */
default:
i += _putchar('%');
i += _putchar(id);
break;
}

return (i);
}
