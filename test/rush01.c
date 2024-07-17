/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 13:35:20 by kkivilah          #+#    #+#             */
/*   Updated: 2024/06/29 18:43:17 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_loop(int x, char char1, char char2, char char3);

void	ft_putchar(char c);

void	rush(int x, int y, char *argv[])
{
	print_loop(x, argv[3], argv[4], argv[5]);
	ft_putchar('\n');
	if (y > 2)
	{
		while (y - 2 != 0)
		{
			print_loop(x, argv[4], ' ', argv[4]);
			ft_putchar('\n');
			y--;
		}
	}
	if (y > 1)
	{
		print_loop(x, argv[5], argv[4], argv[3]);
		ft_putchar('\n');
	}
}

void	print_loop(int x, char char1, char char2, char char3)
{
	int	i;

	i = 0;
	ft_putchar(char1);
	if (x > 2)
	{
		while (i < x - 2)
		{
			ft_putchar(char2);
			i++;
		}
	}
	if (x > 1)
	{
		ft_putchar(char3);
	}

