/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ACH4Q <achaqmohammedamine1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:43:41 by ACH4Q             #+#    #+#             */
/*   Updated: 2024/05/01 22:28:29 by ACH4Q            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    put_comma(void)
{
        write(1, ", ", 2);
}

void    ft_print_comb2(void)
{
        int     a;
        int     b;

        a = -1 ;
        while (a++ < 98)
        {
                b = a ;
                while (b++ < 99)
                {
                        ft_putchar((a / 10) + 48);
                        ft_putchar((a % 10) + 48);
                        ft_putchar(' ');
                        ft_putchar((b / 10) + 48);
                        ft_putchar((b % 10) + 48);
                        if (!(a == 98 && b == 99))
                                put_comma();
                }
        }
}

