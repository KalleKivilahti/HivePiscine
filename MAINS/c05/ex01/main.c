#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb);

int main(int argc, char *argv[]) 
{
	int a;
	if (argc != 2)
	{
		printf("Please insert 1(one) numbers!:)\n");
		return 0;
	}
	else if (argc == 2)
	{
  		a = atoi(argv[1]);
  		printf("%d", ft_recursive_factorial(a));
  	}
  	return 0;
}
