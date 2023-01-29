/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 04:23:23 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/29 08:29:01 by arahmoun         ###   ########.fr       */
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

	i = 1;
	stack->b = NULL;
	stack->a = NULL;
	stack->numbers = NULL;
	stack->argv = NULL;
	empty(ac, av);
	while (i < ac)
		stack->numbers = ft_strjoin(stack->numbers, av[i++]);
	stack->argv = ft_split(stack->numbers, ' ');
	ft_duble_int(stack->argv);
	stack->argc = 0;
	while (stack->argv[stack->argc])
	{
		ft_lstadd_back(&stack->a, ft_lstnew(ft_atoi(stack->argv[stack->argc])));
		stack->argc++;
	}
	check_if_sort(stack->a);
}

void	sorting(t_all *stack)
{
	if (stack->argc <= 3)
		sort2_3(stack);
	else if (stack->argc <= 5)
		sort4_5(stack);
	else
	{
		sort100(stack);
		// sort_100(stack);
	}
}
int	main(int ac, char **av)
{
	// int i;
	t_all	*stack;

	stack = (t_all *)malloc(sizeof(t_all));
	if (ac >= 2)
	{
		lst_init(stack, av, ac);
		sorting(stack);
		// ft_printf("%d\n", stack->argc);
		// system("leaks push_swap");



/*--------------- test my code ------------------*/


		// /*-----  a  -------*/
		// while (stack->a != NULL)
		// {
		// 	i = 0;
		// 	while (i < stack->a->data)
		// 	{
		// 		ft_printf("%s %s", GREEN, DEFFAULT);
		// 		i++;
		// 	}
		// 	ft_printf("%s%d%s\n", DEFFAULT, stack->a->data, DEFFAULT);
		// 	stack->a = stack->a->next;
		// }
		// /* -----  b  ------*/
		// while (stack->b != NULL)
		// {
		// 	i = 0;
		// 	while (i < stack->b->data)
		// 	{
		// 		ft_printf("%s %s", YOLLOW, DEFFAULT);
		// 		i++;
		// 	}
		// 	ft_printf("%s%d%s\n", DEFFAULT, stack->b->data, DEFFAULT);
		// 	stack->b = stack->b->next;
		// }

		
/*------------------------------------------------------*/

		
	}
	return (0);
}
