/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:12:23 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/13 14:15:25 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    putlet(char c)
{
    write(1, &c, 1);
}