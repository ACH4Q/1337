/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ACH4Q <achaqmohammedamine1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:27:37 by ACH4Q             #+#    #+#             */
/*   Updated: 2024/04/11 15:29:24 by ACH4Q            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

	void	ft_putchar(char c)
{
	write(1, &c, 1);
}
