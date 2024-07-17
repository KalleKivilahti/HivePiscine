/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 22:25:03 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/10 11:14:21 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	else
	{
		while (i * i != nb)
		{
			i++;
			if (i > nb)
				return (0);
		}
	}
	if (i * i == nb)
		return (i);
	return (0);
}