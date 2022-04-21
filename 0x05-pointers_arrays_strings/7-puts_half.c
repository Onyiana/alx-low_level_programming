#include "main.h"

/**
 * puts_half-print every other character of a string
 * @str: a pointer to an int that will be changed
 *
 * Return: void
 */

void putd_half(char *str)

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
