/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaho <juaho@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:06:50 by juaho             #+#    #+#             */
/*   Updated: 2024/07/16 11:49:32 by juaho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
#include <unistd.h>

void 	ft_putstr(char *s);

int		ft_strlen(char *s);

char	*ft_strcpy(char *dst, char *src);

char	*ft_strncpy(char *dst, char *src,  int n);

int		ft_atoi(char *s);

#endif
