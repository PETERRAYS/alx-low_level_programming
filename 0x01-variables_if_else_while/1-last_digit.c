#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according to number
 * Return: Always (success)
 *
 */

int main(void)
{

int n, lasted;
srand(time(0));
n = rand() - RAND_MAX / 2;
lasted = n % 10;
if (n > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, lasted);
}
else if (lasted == 0)
{
printf("last digit of %d is %d and is 0\n", n, lasted);
}
else
{
printf("last digit of %d is %d and is is less than 6 and not 0\n", n, lasted);
}
return (0);

}
