/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:10:33 by kkivilah          #+#    #+#             */
/*   Updated: 2024/06/27 16:16:25 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	x;
	char	z;
	char	y;

	x = '0' - 1;
	while (++x <= '9')
	{
		z = x;
		while (++z <= '9')
		{
			y = z + 1;
			while (y <= '9')
			{
				ft_putchar(x);
				ft_putchar(z);
				ft_putchar(y);

				if (x != '7' || z != '8' || y != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				y++;
			}
		}
	}
}

void main (void) {
	ft_print_comb();
}
