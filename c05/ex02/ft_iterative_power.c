/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:55:07 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/23 17:29:48 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_iterative_power(int nb, int power);

// int	main(void)
// {
// 	printf("0:%d\n", ft_iterative_power(1, -10));
// 	printf("0:%d\n", ft_iterative_power(1, -1));
// 	printf("1:%d\n", ft_iterative_power(10, 0));
// 	printf("10:%d\n", ft_iterative_power(10, 1));
// 	printf("100:%d\n", ft_iterative_power(10, 2));
// 	printf("216:%d\n", ft_iterative_power(6, 3));
// 	printf("0:%d\n", ft_iterative_power(0, 3));
// 	return (0);
// }

int	ft_iterative_power(int nb, int power)
{
	int	aux;

	aux = nb;
	nb = 1;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	while (--power >= 0)
	{
		nb = nb * aux;
	}
	return (nb);
}
