/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ACH4Q <achaqmohammedamine1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:14:11 by ACH4Q             #+#    #+#             */
/*   Updated: 2024/04/11 17:14:17 by ACH4Q            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a' ;
	while (a <= 'z')
	{
		write(1, &a, 1);
		++a;
	}
}
