/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:56:21 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/23 17:50:40 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_recursive_power(int nb, int power);

// int	main(void)
// {
// 	printf("0:%d\n", ft_recursive_power(1, -10));
// 	printf("0:%d\n", ft_recursive_power(1, -1));
// 	printf("1:%d\n", ft_recursive_power(10, 0));
// 	printf("10:%d\n", ft_recursive_power(10, 1));
// 	printf("100:%d\n", ft_recursive_power(10, 2));
// 	printf("216:%d\n", ft_recursive_power(6, 3));
// 	printf("0:%d\n", ft_recursive_power(0, 3));
// 	return (0);
// }

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
