/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 19:21:31 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/14 20:16:29 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("%d\n",ft_str_is_alpha("abcde"));
	printf("%d\n",ft_str_is_alpha("qwertyui@"));
	printf("%d\n",ft_str_is_alpha("ud8j2ok0"));
	printf("%d\n",ft_str_is_alpha(""));
	return (0);
}
