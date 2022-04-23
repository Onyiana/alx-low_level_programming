#include "main.h"

/**
 * _strcat - concatinate two strings.
 * @dest: first string.
 * @src: second string.
 * Return: string.
 */

char *_strcat(char *dest, char *src)
{
int a = 0, d = 0;

while (dest[a] != '\0')
a++;

while (src[d] != '\0')
{
des[a] = src[d];
a++;
d++;
}

dest[a] = '\0';

return (dest);
}
