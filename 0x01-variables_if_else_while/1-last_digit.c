#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-entry point
*Return: wether the number is, greater than 5, less than 6 and not 0 or zero
*/
int main(void)
{
	int n;
srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n%10) > 5)
	printf("Last digit of %d is greater than 5\n", n);
	if ((n%10) == 0)
	printf("Last digit of %d is zero\n", n); 
	if ((n%10) < 6 && (n%10 != 0)
	printf("Last digit of %d is less than 6 and not 0\n", n);
	return (0);
}

