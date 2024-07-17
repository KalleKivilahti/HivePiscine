/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 10:24:21 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/09 19:35:41 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == 0)
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i + j] != 0)
		{
			if (to_find[j + 1] == 0)
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
