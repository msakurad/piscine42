/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_manip.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 20:05:01 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/12 19:41:46 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_putint(int n)
{
	char	c;

	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else if (n > 9)
	{
		ft_putint(n / 10);
		c = n % 10 + '0';
		write(1, &c, 1);
	}
}
