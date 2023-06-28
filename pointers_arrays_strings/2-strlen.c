#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: string
 * Return: length
 **/
int _strlen(char *s)
{
int a;
a = 0;
while (*s != '\0')
{
a++;
s++;
}
return (a);
}
