/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:29:29 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/21 22:40:45 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// int	ft_atoi(char *str);

// int	main(void)
// {
// 	printf("%i\n", ft_atoi("\t\n\v\f\r      23"));
// 	printf("%i\n", ft_atoi("   --+--+1234ab5-67"));
// 	printf("%i\n", ft_atoi("     ------+++++---12341@3"));
// 	printf("%i\n", ft_atoi("00000000002147483647"));
// 	printf("%i\n", ft_atoi("-2147483648"));
// 	printf("%i\n", ft_atoi("a"));
// 	return (0);
// }

int	ft_check_rules(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if ((c >= 9 && c <= 13) || c == ' ')
		return (2);
	if (c == '+' || c == '-')
		return (3);
	return (0);
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	i;
	int	cont_minus;

	nbr = 0;
	i = 0;
	cont_minus = 0;
	while (ft_check_rules(str[i]) && str[i])
	{
		if (str[i] == '-')
			cont_minus++;
		if (ft_check_rules(str[i]) == 1)
		{
			nbr = nbr * 10 + ((int)str[i] - 48);
		}
		i++;
	}
	if (cont_minus % 2)
		nbr = nbr * -1;
	return (nbr);
}
