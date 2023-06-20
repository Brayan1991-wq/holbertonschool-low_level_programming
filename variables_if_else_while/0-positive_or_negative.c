#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - if and else statement
 * Description: Print if the stored number is positive or negative
 * Return: 0 (success)
 **/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive \n", n);
}
 else if (n == 0)
{
printf("%d zero \n", n);
}
else
{
printf("%d is negative \n", n);
}
return (0);
}
