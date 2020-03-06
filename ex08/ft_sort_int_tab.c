/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktevot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 19:11:09 by ktevot            #+#    #+#             */
/*   Updated: 2019/09/03 21:33:54 by ktevot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int b;
	int i;
	int j;

	j = 0;
	while (j < size - 1)
	{
		i = j + 1;
		while (i <= size - 1)
		{
			if (tab[j] > tab[i])
			{
				b = tab[j];
				tab[j] = tab[i];
				tab[i] = b;
			}
			i++;
		}
		j++;
	}
}
