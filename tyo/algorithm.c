/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:44:55 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/17 18:02:40 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "structs.h"
#include "functions.h"

int	min(int i, int j, int ij)
{
	int	min;

	min = i;
	if (j < min)
		min = j;
	if (ij < min)
		min = ij;
	return (min);
}

int	**allocate_count(int row, int col)
{
	int	**s;
	int	i;

	s = (int **)malloc(row * sizeof(int *));
	i = 0;
	while (i < row)
	{
		s[i] = (int *)malloc(col * sizeof(int));
		i++;
	}
	return (s);
}

int	**calc_sqr(int **map, t_q *sqr)
{
	int	**s;

	(*sqr).x = -1;
	if (map == NULL || (*sqr).row == 0 || (*sqr).col == 0)
		return (0);
	s = allocate_count((*sqr).row, (*sqr).col);
	while (++(*sqr).x < (*sqr).row)
	{
		(*sqr).y = -1;
		while (++(*sqr).y < (*sqr).col)
		{
			if (map[(*sqr).x][(*sqr).y] == (*sqr).obstacle)
				s[(*sqr).x][(*sqr).y] = 0;
			else if ((*sqr).x == 0 || (*sqr).y == 0)
				s[(*sqr).x][(*sqr).y] = 1;
			else
				s[(*sqr).x][(*sqr).y] = min(s[(*sqr).x - 1][(*sqr).y], s[(*sqr).x][(*sqr).y - 1],
						s[(*sqr).x - 1][(*sqr).y - 1]) + 1;
		}
	}
	find_coordinates(&(*sqr), s);
	return (s);
}

void	free_count(int **s, int row)
{
	int	i;

	i = 0;
	while (i < row)
		free(s[i++]);
	free(s);
}
