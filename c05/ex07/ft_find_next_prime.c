/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:48:28 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/23 19:33:56 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <limits.h>

// int	ft_find_next_prime(int nb);

// int	main(void)
// {
// 	// printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
// 	// 	ft_find_next_prime(-1) == 2 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(-3) == 2 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(0) == 2 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(1) == 2 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(2) == 2 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(3) == 3 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(4) == 5 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(5) == 5 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(6) == 7 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(7) == 7 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(10) == 11 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(11) == 11 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(13) == 13 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(19) == 19 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(20) == 23 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(42) == 43 ? "OK" : "Fail",
// 	// 	ft_find_next_prime(INT_MAX) == 2147483647 ? "OK" : "Fail"
// 	// 	  );
// 	printf("%d\n", ft_find_next_prime(-1));
// 	printf("%d\n", ft_find_next_prime(-3));
// 	printf("%d\n", ft_find_next_prime(0));
// 	printf("%d\n", ft_find_next_prime(1));
// 	printf("%d\n", ft_find_next_prime(2));
// 	printf("%d\n", ft_find_next_prime(3));
// 	printf("%d\n", ft_find_next_prime(4));
// 	printf("%d\n", ft_find_next_prime(5));
// 	printf("%d\n", ft_find_next_prime(6));
// 	printf("%d\n", ft_find_next_prime(7));
// 	printf("%d\n", ft_find_next_prime(10));
// 	printf("%d\n", ft_find_next_prime(11));
// 	printf("%d\n", ft_find_next_prime(13));
// 	printf("%d\n", ft_find_next_prime(19));
// 	printf("%d\n", ft_find_next_prime(20));
// 	printf("%d\n", ft_find_next_prime(40));
// 	printf("%d\n", ft_find_next_prime(41));
// 	printf("%d\n", ft_find_next_prime(42));
// 	printf("%d\n", ft_find_next_prime(42));
// 	printf("INT_MAX-1 %d\n", ft_find_next_prime(2147483646));
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

int	ft_find_next_prime(int nb)
{
	int	next_p;

	next_p = nb;
	if (ft_is_prime(next_p))
		return (next_p);
	else
	{
		while (!ft_is_prime(next_p))
		{
			next_p++;
		}
	}
	return (next_p);
}
