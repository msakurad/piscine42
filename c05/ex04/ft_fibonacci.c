/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:57:18 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/22 19:12:34 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_fibonacci(int index);

// int	main(void)
// {
// 	printf("-1:%d\n", ft_fibonacci(-20));
// 	printf("-1:%d\n", ft_fibonacci(-1));
// 	printf("0:%d\n", ft_fibonacci(0));
// 	printf("1:%d\n", ft_fibonacci(1));
// 	printf("1:%d\n", ft_fibonacci(2));
// 	printf("2:%d\n", ft_fibonacci(3));
// 	printf("55:%d\n", ft_fibonacci(10));
// 	printf("6765:%d\n", ft_fibonacci(20));
// 	return (0);
// }

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
