#include "../../../c07/ex03/ft_strjoin.c"
#include <stdio.h>

int	main(void)
{
	char	*tab[4];
	tab[0] = "yeah";
	tab[1] = "check";
	tab[2] = "my ";
	tab[3] = "skills";
	printf("%s\n", ft_strjoin(4, tab, "ccccccc"));
	return (0);
}

