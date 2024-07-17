/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:08:01 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/14 15:03:44 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    char buffer[HASHSIZE] = {0}; //malloc?
    int *nb_ar;

    i = 0;
    if (argc != 2)
    {
        write(1, "Please enter 1(one) number! ;b\n", 32);
        return (0);
    }
    while (argv[1][i])
    {
        if (argv[1][i] < '0' || argv[1][i] > '9')
        {
            write(1, "Please enter a positive NUMBER! ;b\n", 35);
            return (0);
        }
        i++;
    }
    nb_ar[argc - 1] = ft_atoi(argv[1]);
    num_to_word(nb_ar, buffer);
    printf("%s", nb_ar, buffer);
    return (0);
}
