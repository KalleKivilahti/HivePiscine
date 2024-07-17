/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:08:46 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/17 16:16:58 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
#define HEADER_H

typedef struct s_map
{
    int **grid;
    int w;
    int h;
    char obst;
    char free;
    char occp;
}   t_map;

typedef struct s_sqr
{
	int	x;
	int	y;
	int	size;
    int obstacle;
    int row;
    int col;
    int biggestx;
    int biggesty;
    int biggest_size;
}	t_q;

#endif
