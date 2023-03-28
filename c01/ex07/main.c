/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:48:52 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/13 14:46:08 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SIZE 8

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[5];
	int	empty[0];
	int	i;

	i = 0;
	while (i < SIZE)
	{
		tab[i] = i;
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, SIZE);
	i = 0;
	while (i < SIZE)
	{
		printf("%d", tab[i]);
		i++;
	}

	ft_rev_int_tab(empty, 0);
	return (0);
}
