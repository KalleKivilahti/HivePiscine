/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_validator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:53:03 by juaho             #+#    #+#             */
/*   Updated: 2024/07/17 12:12:22 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "error.h"
#include "validate_map.h"

int	is_printable(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

int	first_line_len(char *s)
{
	int	line_len;

	line_len = 0;
	while (1)
	{
		if (s[line_len] == '\0')
			return (-1);
		if (s[line_len] == '\n')
			return (line_len);
		line_len++;
	}
}

int	validate_first_line(char *s)
{
	int	i;
	int	map_syms;

	i = first_line_len(s);
	map_syms = 0;
	if (i < 4)
		return (0);
	while (i > 0)
	{
		if (!is_printable(s[i]))
			return (0);
		i--;
		map_syms++;
		if (map_syms == 3)
			break ;
	}
	while (i >= 0)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i--;
	}
	return (1);
}

int	validate_map_w(char *s)
{
	int	first_w;
	int	w;
	int	index;

	first_w = 0;
	w = 0;
	index = first_line_len(s) + 1;
	while (s[index] != '\n')
		first_w++;
	while (1)
	{
		if (s[index] == '\n' || s[index] == '\0')
		{
			if (w != first_w)
				return (0);
			if (s[index] == '\0')
				break ;
			w = 0;
		}
		else
			w++;
		index++;

	}
	return (first_w);
}
