#include "factors.h"

/**
 * factorizer - Main function factorize a number
 * @buffer: The pointer to the address of the number
 * Author: Frank Galos
 * Return: (Always)
 */
int factorizer(char *buffer)
{

	u_int32_t n;
	u_int32_t i;

	n = atoi(buffer);


	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d=%d*%d\n",n,n/i,i);
			break;
		}
	}

return (0);
}
