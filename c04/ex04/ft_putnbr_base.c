/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:58:52 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/21 22:42:16 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void	ft_putnbr_base(int nbr, char *base);

// int	main(void)
// {
// 	int		nbr;
// 	char	*base;

// 	base = (char *)malloc(sizeof(char) * 100);
// 	nbr = 57;
// 	strcpy(base, "0123456789ABCDEF");
// 	printf("dec: %d, hex: %X\n", nbr, nbr);
// 	ft_putnbr_base(nbr, base);
// 	printf("\n");
// 	strcpy(base, "01");
// 	printf("dec: %d \n", nbr);
// 	ft_putnbr_base(nbr, base);
// 	printf("\n");
// 	free(base);
// 	return (0);
// }

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_put_zero(int nbr)
{
	if (nbr == 0)
		write(1, "0", 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || (base[i] >= 0 && base[i] <= 31))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_mod(int nbr, int len, char *base)
{
	int		mod;
	char	c;

	mod = nbr % len;
	if (mod < 0)
		mod = mod * -1;
	c = base[mod];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;

	if (ft_check_base(base))
	{
		len = ft_strlen(base);
		if (nbr < 0)
		{
			write(1, "-", 1);
			if (nbr == -2147483648)
			{
				ft_putnbr_base(nbr / len * -1, base);
				nbr = -2147483648;
				ft_print_mod(nbr, len, base);
			}
			else
				nbr = nbr * -1;
		}
		if (nbr > 0)
		{
			if (nbr / len > 0)
				ft_putnbr_base(nbr / len, base);
			ft_print_mod(nbr, len, base);
		}
		ft_put_zero(nbr);
	}
}
