/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:35:25 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/05 11:51:48 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;
	while (s1[i] != 0 && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main()
{
	int r;
	char b[3];

	r = 0;
	char s1[] = "asas";
	char s2[] = "asasa";
	r = ft_strcmp(s1, s2);
	b[0] = (r / 10) + '0';
	b[1] = (r % 10) + '0';
	b[2] = '0';
	write(1, b, 3);
}
