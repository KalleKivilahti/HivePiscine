#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power);

int main(int argc, char *argv[]) 
{
	int a;
	int i;
	if (argc != 3)
	{
		printf("Please insert 2(two) numbers!:)\n");
		return 0;
	}
	else if (argc == 3)
	{
  		a = atoi(argv[1]);
		i = atoi(argv[2]);
  		printf("%d", ft_recursive_power(a, i));
  	}
  	return 0;
}
