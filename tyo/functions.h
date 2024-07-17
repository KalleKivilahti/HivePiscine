/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:08:23 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/17 18:02:48 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "structs.h"

int	**calc_sqr(int **map, t_q *sqr);
int find_coordinates(t_q *sqr, int **s);
void    draw_biggest_square(t_q sqr, int **map);
void    print_map(t_q sqr, int **map);

#endif