/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:01:38 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/13 15:43:12 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SIZE 8

void	ft_sort_int_tab(int *tab, int size);
void	ft_print_tab(int *tab, int size);

int	main(void)
{
	int	tab0[0];
	int	tab1[5] = {5, 4, 1, 3, 2};
	int	tab2[8] = {5, 1, 25, 73, 91, 33, 11, 0};
	int	tab3[7] = {7, 6, 5, 4, 3, 2, 1};

	printf("tab0\n");
	ft_sort_int_tab(tab0, 0);
	ft_print_tab(tab0, 0);
	printf("tab1\n");
	ft_print_tab(tab1, 5);
	ft_sort_int_tab(tab1, 5);
	ft_print_tab(tab1, 5);
	printf("tab2\n");
	ft_print_tab(tab2, 8);
	ft_sort_int_tab(tab2, 8);
	ft_print_tab(tab2, 8);
	printf("tab3\n");
	ft_print_tab(tab3, 7);
	ft_sort_int_tab(tab3, 7);
	ft_print_tab(tab3, 7);
	return (0);
}

void	ft_print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}
