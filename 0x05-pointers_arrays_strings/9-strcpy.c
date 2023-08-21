#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: char type string
 * @src: char type string
 *
 * Return: nothing
*/
char *_strcpy(char *dest, char *src)
{
int i;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
