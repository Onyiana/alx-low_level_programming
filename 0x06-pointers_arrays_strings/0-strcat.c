#incude "main.h"

/**
 * _strcat - function that concatenate
 * two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: ponter to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
int c, c2;
c = 0;
/*find the size of dest array*/
while (dest[c])
c++;
/* ilterate through each src array value without the null byte*/
for (c2 = 0; src[c2]; c2++)
/*append src[c2] to dest[c] while overwritting the null bytes in dest*/
dest[c++] = src[c];
return (dest);
}
