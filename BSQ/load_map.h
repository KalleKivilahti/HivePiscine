/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:01:06 by juaho             #+#    #+#             */
/*   Updated: 2024/07/17 15:04:58 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOAD_MAP_H
# define LOAD_MAP_H

#include "header.h"

int	file_length(char *filepath);

char	*file_to_string(char *filepath);

t_map 	*init_map(char *str);

int		allocate_grid(t_map *map);

void	free_grid(t_map *ma, int rows);

#endif
