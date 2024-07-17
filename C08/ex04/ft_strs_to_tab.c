/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:09:26 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/17 22:17:01 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

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

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*tab;
	int				i;

	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		tab[i].size = ft_strlen(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
