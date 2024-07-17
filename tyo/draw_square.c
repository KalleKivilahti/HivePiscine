/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:19:59 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/17 18:07:44 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include "structs.h"
#include "utils.h"

#include <stdio.h>

int find_coordinates(t_q *sqr, int **s)
{
    int i;
    int j;

    ((*sqr)).biggest_size = 0;
    i = 0;
    while (i < ((*sqr)).row)
    {
        j = 0;
        while (j < (*sqr).col)
        {
            if (s[i][j] > (*sqr).biggest_size)
            {
                (*sqr).biggest_size = s[i][j];
                (*sqr).biggestx = i;
                (*sqr).biggesty = j;
            }
            j++;
        }
        i++;
    }
    printf("%d\n", i);
    return (*sqr).biggest_size;
}
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    draw_biggest_square(t_q sqr, int **map)
{
    int i;
    int j;

    i = sqr.biggestx;
    j = sqr.biggesty;
    while (i > sqr.biggestx - sqr.biggest_size)
    {
        while (j > sqr.biggesty - sqr.biggest_size)
        {
            map[i][j] = 'x';
            j--;
        }
        map[i][j] = 'x';
        i--;
    }
}

void    print_map(t_q sqr, int **map)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < sqr.row)
    {
        while (j < sqr.row)
        {
            printf("%c", map[i][j]);
            j++;
        }
        printf("%c", map[i][j]);
        ft_putchar('\n');
        i++;
    }
}
