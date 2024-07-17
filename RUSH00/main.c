/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:34:00 by kkivilah          #+#    #+#             */
/*   Updated: 2024/06/29 18:43:34 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y, char argv[]);

int	atoi(char s[]);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;



	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if (x <= 0 || y <= 0)
	{
		write(1, "Meow! Please insert a positive number.\n", 39);
		return (8);
	}
	else
	{
		rush(x, y, *argv);
	}
	return (0);
}


int atoi(char s[])
{
        int n;
        int i;

	n = 0;
	i = 0;
        while (s[i] >= '0' && s[i] <= '9')
        {
                n = 10 * n + (s[i] - '0');
                i++;
        }
	return (n);
}
