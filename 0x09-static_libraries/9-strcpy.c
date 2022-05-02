#include "main.h"
/**
 * _strcpy - copies thr string pointed to bh src
 * *@dest: a pointer to a char that eill be changed
 * *@src: a pointer to a char that will be changed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{

int i;

i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);

}
