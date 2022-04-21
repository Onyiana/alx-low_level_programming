#include "main.h"
/**
 * is_numerical - checks if it is a digit
 * @n: number
 * Return: 1 or 0
 */
int is_numerical(unsigned int n)
{
return (n >= '0' && n <= '9');
}

/**
 * _atoi - covert a string to an integer
 * *@s: string
 * Return: num
 */
int _atoi(char *s)
{
unsigned int number, i;
int sign;

for (i = 0; s[i] != '\0'; i++)
{
if (is_mumerical(s[i]))
{
number = (s[i] - 48) + number * 10;

if (s[i + 1] == ' ')
break;
}
else if (s[i] == '-'_)
{
sign *= -1;
}

}

return (number *sign);

}

