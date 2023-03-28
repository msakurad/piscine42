/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 16:56:16 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/13 18:34:47 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 3;
	ft_swap(&a, &b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	a = -23;
	b = 45;
	ft_swap(a, b);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}
