/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:13:11 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/12 17:18:05 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d, b: %d\n", a, b);
	a = -123;
	b = 8;
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d, b: %d\n", a, b);
	return (0);
}
