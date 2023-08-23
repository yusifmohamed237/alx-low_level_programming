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
int i, j;

for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}
