/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkivilah <kkivilah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 11:23:04 by kkivilah          #+#    #+#             */
/*   Updated: 2024/07/14 13:12:43 by kkivilah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "header.h"

void num_to_word(int nb, char *buffer)
{
    char num_dict_0_19[] = {"zero", "one", "two", "three", "four", "five", "six", 
    "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", 
    "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    /*char num_dict_tens[] = {"", "", "twenty", "thirty", "fourty", "fifty", 
    "sixty", "seventy", "eighty", "ninety"};
    char hundreds[] = "hundred";
    char thousands[] = "thousand";
    char millions[] = "million";
    char billions[] = "billion";
    char trillions[] = "trillion";
    char quadrillions[] = "quadrillion";
    char quintillions[] = "quintillion";
    char sextillions[] = "sextillion";
    char septillions[] = "septillion";
    char octillions[] = "octillion";
    char nonillions[] = "nonillion";
    char decillions[] = "decillion";
    char undecillions[] = "undecillion";*/

    if (nb < 20)
        ft_append(buffer, num_dict_0_19[nb]);
}

void    ft_append(char *za_namba, char *za_wardo)
{
    if (ft_strlen(za_namba) != 0)
        ft_strcat(za_namba, " ");
    ft_strcat(za_namba, za_wardo);
}
