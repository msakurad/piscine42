/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:04:44 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/19 18:27:24 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <limits.h>
// #include <stdlib.h>
// #include <stdio.h>

// void	ft_putnbr(int nb);

// int	main(void)
// {
// 	int	i;

// 	i = -4205022;
// 	ft_putnbr(i);
// 	write(1, "\n", 1);
// 	i = INT_MIN;
// 	ft_putnbr(i);
// 	write(1, "\n", 1);
// 	i = INT_MAX;
// 	ft_putnbr(i);
// 	write(1, "\n", 1);
// 	return (0);
// }

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = -147483648;
		}
		ft_putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}
