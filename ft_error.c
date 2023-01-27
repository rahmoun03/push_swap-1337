/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:38:44 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/27 08:51:33 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_printf("%sError%s\n", RED, DEFFAULT);
	exit(1);
}

void	ft_duble_int(char **av)
{
	int	i;
	int	j;

	i = 0;
	ft_is_digit(av);
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				ft_error();
			j++;
		}
		i++;
	}
}

int	one_digit(char *str)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (str[j])
	{
		if (str[j] <= '9' && str[j] >= '0')
			i++;
		j++;
	}
	return (i);
}

void	empty(int ac, char **av)
{
	int	i;

	i = 1;
	while (ac > i)
	{
		if (!(ft_strlen(av[i])) || !(one_digit(av[i])))
			ft_error();
		i++;
	}
}
