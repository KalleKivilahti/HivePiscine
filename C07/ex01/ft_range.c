/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 22:47:38 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/12 09:51:08 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	i = 0;
	if (min >= max)
		return (0);
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
		return (0);
	else
	{
		while (i < max - min)
		{
			result[i] = min + i;
			i++;
		}
		return (result);
	}
}
