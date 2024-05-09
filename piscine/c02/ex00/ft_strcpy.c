/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ACH4Q <achaqmohammedamine1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 23:52:28 by ACH4Q             #+#    #+#             */
/*   Updated: 2024/05/09 00:11:24 by ACH4Q            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while(src[index] != '\0')
	{
		dest[index] = src[index];
		++index;
	}
	dest[i] = '\0';
	return(dest);
}
