/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:00:22 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/05 11:37:08 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d_size;

	d_size = 0;
	i = 0;
	while (dest[d_size])
	{
		d_size++;
	}
	while (i < nb && src[i])
	{
		dest[d_size] = src [i];
		d_size++;
		i++;
	}
	dest[d_size] = 0;
	return (dest);
}
