/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:13:06 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/22 19:09:22 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_iterative_factorial(int nb);

// int	main(void)
// {
// 	printf("0:%d\n", ft_iterative_factorial(-10));
// 	printf("0:%d\n", ft_iterative_factorial(-1));
// 	printf("1:%d\n", ft_iterative_factorial(0));
// 	printf("1:%d\n", ft_iterative_factorial(1));
// 	printf("3628800:%d\n", ft_iterative_factorial(10));
// 	printf("6:%d\n", ft_iterative_factorial(3));
// 	return (0);
// }

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
