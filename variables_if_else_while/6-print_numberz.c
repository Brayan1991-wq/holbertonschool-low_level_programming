#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - base ten numbers
 * Description: print base ten numbers
 * Return: 0 (success)
 **/
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');

return (0);
}
