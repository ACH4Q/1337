/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ACH4Q <achaqmohammedamine1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 22:12:31 by ACH4Q             #+#    #+#             */
/*   Updated: 2024/05/07 13:54:41 by ACH4Q            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		temp = tab[a];
		tab[a] = tab[b];
		tab[b] = temp;
		++a;
		--b;
	}
}
