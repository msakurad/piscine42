/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:19:42 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/12 17:25:54 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "Hello Worlds...";
	ft_putstr(str);
	ft_putstr("pasta\nsubpasta");
	return (0);
}
