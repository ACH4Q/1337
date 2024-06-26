/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ACH4Q <achaqmohammedamine1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 23:32:57 by ACH4Q             #+#    #+#             */
/*   Updated: 2024/05/05 23:42:35 by ACH4Q            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;
	mod = *a % *b;
	div = *a / *b;
	*b = mod;
	*a = div;
}
