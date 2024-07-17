/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:21:09 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/05 11:36:34 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	d_size;

	d_size = 0;
	i = 0;
	while (dest[d_size])
	{
		d_size++;
	}
	while (src[i])
	{
		dest[d_size] = src [i];
		d_size++;
		i++;
	}
	dest[d_size] = 0;
	return (dest);
}
