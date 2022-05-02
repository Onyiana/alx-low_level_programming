#include <unistd.h>

/**
* main-Entry point
*
* Return: 0 if successful
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
