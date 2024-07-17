#include <stdio.h>
#include <stdlib.h>
#include "../../../c07/ex01/ft_range.c"

int		main(void)
{
	int i;
	int *result;
	int min;
	int max;

	min = -2;
	max = 8;
	result = ft_range(min, max);
	if (result != 0)
	{
		i = -1;
		while (++i < max - min)
		{
			printf("%d\n", result[i]);
		}
	}
	else
	return (0);                                                                         
}

