/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:14:07 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/12 10:03:52 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int *)malloc(sizeof(*result) * (max - min));
	if (result == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < max - min)
		{
			result[i] = min + i;
			i++;
		}
		*range = result;
		return (i);
	}
}
