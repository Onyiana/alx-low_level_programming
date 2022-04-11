#include <stdio.h>

/**
* main-print all possible combinations of a single-digit numbers
* followed by a space
* Return: 0 if successful
*/
int main(void)
{
int n;

for (n = 48; n < 58; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
pitchar(' ');
}
}
putchar('\n');
return (0);
}
