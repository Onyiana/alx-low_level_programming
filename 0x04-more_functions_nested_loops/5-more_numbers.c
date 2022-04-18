#include "main.h"

/**
 * more_numbers-prints more numbers
 * Return:void
 */

void more_numbers(void)
{
int n;
int I = 0;


while (I < 10)
{
for (n = 0; n <= 14; n++)
{
I= n;
if (n > 9)
{
_putchar('1')
I= n % 10;
}
_putchar('\n');
I++;
}

}
 
