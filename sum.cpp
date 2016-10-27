#include <stdio.h>
#include <math.h>
#include <stdlib.h>

unsigned int	sum_numbers(unsigned int *array_numbs, int i)
{
	unsigned int result;
	unsigned int j;
	
	result = 0;
	j = 0;
	while (j < i)
	{
		result += array_numbs[j];
		j++;
	}
	return (result);
}

	
unsigned int	sum_digits(int a1, int a2, int a3, int a4, int a5)
{
	unsigned int sum;
	
	sum = pow(a1, 5) + pow (a2, 5) + pow(a3, 5) + pow(a4, 5) + pow(a5, 5);
	return (sum);
}

unsigned int	numb_digits(int a1, int a2, int a3, int a4, int a5)
{
	unsigned int numb;
	
	numb = a1 * 10000 + a2 * 1000 + a3 * 100 + a4 * 10 + a5;
	return (numb);
}

int		main(void)
{
	int a1, a2, a3, a4, a5;
	unsigned int *array_numbs = NULL;
	unsigned int i;
	unsigned int result;
	
	i = 0;
	a1 = 2;
	while (a1 <= 9)
	{
		a2 = 0;
		while (a2 <= 9)
		{
			a3 = 0;
			while (a3 <= 9)
			{
				a4 = 0;
				while (a4 <= 9)
				{
					a5 = 0;
					while (a5 <= 9)
					{
						if (sum_digits(a1, a2, a3, a4, a5) == numb_digits(a1, a2, a3, a4, a5))
						{
							array_numbs = (unsigned int *)realloc(array_numbs, sizeof(unsigned int));
							array_numbs[i] = numb_digits(a1, a2, a3, a4, a5);
							i++;
						}	
						a5++;
					}
					a4++;
				}
				a3++;
			}
			a2++;
		}
		a1++;
	}
	result = sum_numbers(array_numbs, i);

	printf("Result is %d\n", result);
	return (0);
}
