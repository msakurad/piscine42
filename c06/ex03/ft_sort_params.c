/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 11:14:08 by msakurad          #+#    #+#             */
/*   Updated: 2023/03/31 13:21:38 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_sortstr(char **argv);
int		ft_strcmp(char *s1, char *s2);
void	ft_putstr(char *str);
void	ft_swapstr(char **s1ptr, char **s2ptr);

int	main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	argv++;
	ft_sortstr(argv);
	while (*argv)
	{
		ft_putstr(*argv);
		write(1, "\n", 1);
		argv++;
	}
	return (0);
}

void	ft_sortstr(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			//printf("ft_strcmp, result para argv[i] %s e argv[j] %s:\n", argv[i], argv[j]);
			//printf("result %d\n", ft_strcmp(argv[i], argv[j]));
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swapstr(&argv[i], &argv[j]);
			}
			//printf("ft_swapstr, result para argv[i] %s e argv[j] %s:\n", argv[i], argv[j]);
			j++;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swapstr(char **s1ptr, char **s2ptr)
{
	char	*temp;

	temp = *s1ptr;
	// printf("ftswapstr, temp %s\n", temp);
	// printf("ftswapstr, s1 %s\n", *s1ptr);
	// printf("ftswapstr, s2 %s\n", *s2ptr);
	*s1ptr = *s2ptr;
	*s2ptr = temp;
	// printf("ftswapstr, after temp %s\n", temp);
	// printf("ftswapstr, after s1 %s\n", *s1ptr);
	// printf("ftswapstr, after s2 %s\n", *s2ptr);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
