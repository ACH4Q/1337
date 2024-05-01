/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ACH4Q <achaqmohammedamine1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:11:56 by ACH4Q             #+#    #+#             */
/*   Updated: 2024/05/01 21:31:54 by ACH4Q            ###   ########.fr       */
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

void    ft_print_comb(void)
{
        int     a;
        int     b;
        int     c;

        a = -1;
        while (a++ < 7)
        {
                b = a ;
                while (b++ < 8)
                {
                        c = b;
                        while (c++ < 9)
                        {
                                if (a < b && b < c)
                                {
                                        ft_putchar(a + 48);
                                        ft_putchar(b + 48);
                                        ft_putchar(c + 48);
                                        if (!(a == 7 && b == 8 && c == 9))
                                                put_comma();
                                }
                        }
                }
        }
}

