/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:15:25 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/17 14:15:35 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_printable(char *str);

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_printable("abcde"));
// 	printf("%d\n", ft_str_is_printable("1234567\0"));
// 	printf("%d\n", ft_str_is_printable("idoa\ndkd"));
// 	printf("%d\n", ft_str_is_printable("kkdk ks\t"));
// 	printf("%d\n", ft_str_is_printable(""));
// 	return (0);
// }

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str >= 0 && *str <= 31)
			return (0);
		str++;
	}
	return (1);
}
