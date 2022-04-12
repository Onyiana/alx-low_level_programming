#include "main.h"

* main-Entry point
* printing alphabet x10
* Return: 0 if successful
*/
void print_alphabet_x10(void)
{
int alphabet;
int count:
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
