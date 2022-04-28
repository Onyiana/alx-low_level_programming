#include "main.h"

/**
 * palind2 - obtains length of a
 * @a: string
 * @L: int to count length
 *
 * Return: 1 or 0 if successful
 * On error, return -1, and errno is set appropriately.
 */
int palind2(char *a, int L)
{
if (*a == 0)
return (L - 1);
return (palind2(a + 1, L + 1));
}
/**
 * palind3 - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: 1 if successful.
 * On error, return -1, and errno is set appropriately.
 */

int palind3(char *a, int L)
{
if (*a != *(a + L))
return (0);
else if (*a == 0)
return (1);
return (palind3(a + 1, L - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: 1 if successful.
 * On error, return -1, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
int L;

L = palind2(s, 0);
return (palind3(s, L));
}
