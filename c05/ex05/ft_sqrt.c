/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:59:52 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/22 19:06:49 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <limits.h>

// int	ft_sqrt(int nb);

// int	main(void)
// {
// 	printf("0:%d\n", ft_sqrt(0));
// 	printf("10:%d\n", ft_sqrt(100));
// 	printf("6:%d\n", ft_sqrt(36));
// 	printf("0:%d\n", ft_sqrt(37));
// 	printf("100:%d\n", ft_sqrt(10000));
// 	printf("0:%d\n", ft_sqrt(10001));
// 	printf("2000:%d\n", ft_sqrt(4000000));
// 	printf("0:%d\n", ft_sqrt(INT_MAX));
// 	printf("0:%d\n", ft_sqrt(INT_MIN));
// 	printf("0:%d\n", ft_sqrt(-36));
// 	return (0);
// }

int	ft_sqrt_recursv(int nb, int try)
{
	int	res;

	res = (try + (nb / try)) / 2;
	if (res - try == 0 && res * try == nb)
		return (res);
	else if (res - try == 0 && res * try != nb)
		return (0);
	else
	{
		return (ft_sqrt_recursv(nb, res));
	}
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	return (ft_sqrt_recursv(nb, 1));
}
