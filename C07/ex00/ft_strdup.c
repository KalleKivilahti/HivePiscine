/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:53:54 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/12 09:45:27 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(src) * (i + 1));
	if (dest == 0)
		return (0);
	else
	{
		i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = 0;
	return (dest);
}
