#include <stdio.h>
#include "../../../c07/ex02/ft_ultimate_range.c"

int	main()
{
	int i;
	int *tab;
	int min;
	int max;
	int size;

	min = -2;
	max = 5;
	size = ft_ultimate_range(&tab, min, max);
	if (tab != NULL)
	{
		i = -1;
		while (++i < max - min)
		{
			printf("%d\n", tab[i]);
		}
	}
	else
		printf("whaaat");
}
