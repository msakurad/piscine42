/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:04:30 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/12 17:11:09 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 5;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
	a = -123;
	b = 15;
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
}
