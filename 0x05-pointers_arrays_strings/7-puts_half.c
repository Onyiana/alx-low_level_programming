#include "main.h"

/**
 * puts_half-print every other character of a string
 * @str: a pointer to an int that will be changed
 *
 * Description: if odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)

{
int i, last;

i = 0;
while (str[i] != '\0')
{
i++;
}

last = (i + 1) / 2;

for (i = last; str[i]; i++)
{
_putchar (str[i]);
}

_putchar ('\n');

}
