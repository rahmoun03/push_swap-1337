/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 04:23:23 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/24 20:50:03 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_is_digit(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if ((av[i][j] > '9' || av[i][j] < '0') && av[i][j] != ' '
				&& av[i][j] != '-' && av[i][j] != '+')
				ft_error();
			j++;
		}
		i++;
	}
}

void	lst_init(t_all *stack, char **av, int ac)
{
	int	i;

	stack->a = NULL;
	i = 1;
	while (i < ac)
		stack->numbers = ft_strjoin(stack->numbers, av[i++]);
	stack->argv = ft_split(stack->numbers, ' ');
	ft_duble_int(stack->argv);
	i = 0;
	while (stack->argv[i])
	{
		ft_lstadd_back(&stack->a, ft_lstnew(ft_atoi(stack->argv[i])));
		i++;
	}
}

int	main(int ac, char **av)
{
	t_all	*stack;

	stack = (t_all *)malloc(sizeof(t_all));
	stack->numbers = NULL;
	stack->argv = NULL;
	stack->b = NULL;
	if (ac < 2)
		ft_error();
	else
	{
		lst_init(stack, av, ac);
		/*-----  a  -------*/
		while (stack->a != NULL)
		{
			ft_printf("%s%d%s\n", RED, stack->a->data, DEFFAULT);
			stack->a = stack->a->next;
		}
		/* -----  b  ------*/
		while (stack->b != NULL)
		{
			ft_printf("%s%d%s\n", GREEN, stack->b->data, DEFFAULT);
			stack->b = stack->b->next;
		}
	}
	return (0);
}
