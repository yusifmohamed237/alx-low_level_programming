#include "main.h"

/**
 * *_strcat - This function appends the src string to the dest string.
 *
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
int c, c2;

c = 0;
while (dest[c])
c++;
for (c2 = 0; src[c2]; c2++)
dest[c++] = scr[c2];
return (dest);
}
