#include "main.h"

/**
 * more_numbers-prints more numbers
 * Return:void
 */

viod more_numbers(void)
{
char n, c;
int I = 0;


while (I < 10)
{
for (n = 0; n <= 14; n++)
{
c = n;
if (n > 9)
{
_putchar('1');
c = n % 10;
}
_putchar('\n');
I++;
}

}
 
