/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strfun.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:24:47 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/14 12:38:33 by kkivilah         ###   ########.fr       */
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

int	ft_strlen(char *hahehehee)
{
	int	GOfOrwAAAAAAAAAARDandC0unT;

	GOfOrwAAAAAAAAAARDandC0unT = 0;
	while (hahehehee[GOfOrwAAAAAAAAAARDandC0unT])
		GOfOrwAAAAAAAAAARDandC0unT++;
	return (GOfOrwAAAAAAAAAARDandC0unT);
}
