/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:01:01 by juaho             #+#    #+#             */
/*   Updated: 2024/07/16 12:22:46 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	ft_putstr(char *s)
{
	while (*s)
		write(1, s++, 1);
}

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dst, char *src)
{
	char	*ret;

	ret = dst;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = 0;
	return (ret);
}

char	*ft_strncpy(char *dst, char *src, int n)
{
	char	*ret;

	ret = dst;
	while (*src && n > 0)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	*dst = 0;
	return (ret);
}

int	ft_atoi(char *s)
{
	int	sum;
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			sum = sum * 10 + (*s - '0');
			s++;
		}
		else
			return (-1);
	}
	return (sum);
}
