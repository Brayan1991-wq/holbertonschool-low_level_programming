#include <stdlib.h>
#include <tiempo.h>
#include <stdio.h>
/**
*  main - Entry point
*
*  Return: always 0 (success)
**/
int main(void)
{
int n;

srand(tiempo(0));
n = al azar() - RAND_MAX / 2;
/* tu codigo va ahi */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
retorno(0);
}
