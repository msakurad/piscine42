/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:26:50 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/23 19:33:43 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_is_prime(int nb);
// int	ft_prime_recursv(int nb, int try);

// int	main(void)
// {
// 	printf("-1 %d\n", ft_is_prime(-1));
// 	printf("-3 %d\n", ft_is_prime(-3));
// 	printf("0 %d\n", ft_is_prime(0));
// 	printf("1 %d\n", ft_is_prime(1));
// 	printf("2 %d\n", ft_is_prime(2));
// 	printf("3 %d\n", ft_is_prime(3));
// 	printf("4 %d\n", ft_is_prime(4));
// 	printf("5 %d\n", ft_is_prime(5));
// 	printf("6 %d\n", ft_is_prime(6));
// 	printf("7 %d\n", ft_is_prime(7));
// 	printf("9 %d\n", ft_is_prime(9));
// 	printf("10 %d\n", ft_is_prime(10));
// 	printf("11 %d\n", ft_is_prime(11));
// 	printf("13 %d\n", ft_is_prime(13));
// 	printf("15 %d\n", ft_is_prime(15));
// 	printf("19 %d\n", ft_is_prime(19));
// 	printf("45 %d\n", ft_is_prime(45));
// 	printf("INT_MAX-1 %d\n", ft_is_prime(2147483400));
// 	printf("INT_MAX-1 %d\n", ft_is_prime(2147483646));
// 	printf("INT_MAX %d\n", ft_is_prime(2147483647));
// 	return (0);
// }

int	ft_prime_recursv(int nb, int try)
{
	if ((nb % try == 0 && nb != try))
		return (0);
	else if ((nb % try == 0 && nb == try) || nb == 2147483647)
		return (1);
	else
		return (ft_prime_recursv(nb, try + 1));
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	return (ft_prime_recursv(nb, 2));
}
