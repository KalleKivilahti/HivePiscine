#include <stdio.h>
#include <stdlib.h>

int	ft_fibonacci(int index);

int main(int argc, char *argv[]) 
{
	int a;
	int i;
	i = 0;
	if (argc != 2)
	{
		printf("Please insert 1(one) number!:)\n");
		return 0;
	}
	else if (argc == 2)
	{
  		a = atoi(argv[1]);
  		printf("%d", ft_fibonacci(a));
  	}
  	return 0;
}
