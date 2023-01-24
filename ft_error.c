/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:38:44 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/24 09:40:18 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_printf("%sERROR%s\n", RED, DEFFAULT);
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
