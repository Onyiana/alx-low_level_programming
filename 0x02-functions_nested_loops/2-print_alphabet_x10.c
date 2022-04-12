#include "main.h"

/**
*main-print_alphabet_x10 - a function that prints 10 times the alphabet
*
* Return: 0 if successful
*/
void print_alphabet_x10(void)
{
int alphabet;
int count;
count = 0;
while (count < 10)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
count++;
_putchar('\n');
}
}
