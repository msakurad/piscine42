/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:54:17 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/22 19:10:20 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_recursive_factorial(int nb);

// int	main(void)
// {
// 	printf("0:%d\n", ft_recursive_factorial(-10));
// 	printf("0:%d\n", ft_recursive_factorial(-1));
// 	printf("1:%d\n", ft_recursive_factorial(0));
// 	printf("1:%d\n", ft_recursive_factorial(1));
// 	printf("3628800:%d\n", ft_recursive_factorial(10));
// 	printf("6:%d\n", ft_recursive_factorial(3));
// 	return (0);
// }

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
