/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:35:59 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/27 16:16:33 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	return_2_a(t_all *stack)
{
	int i;

	i = 0;
	while (i < stack->argc)
	{
		pa(stack);
		i++;
	}
}

int the_min(t_all *stack)
{
    int i;
    int key;
    t_node *tmp;

    i = 0;
    tmp = stack->a;
    key = tmp->data;
    while (tmp)
    {
        if(tmp->data <= key)
            key = tmp->data;
        i++;
		tmp = tmp->next;
    }
    return (key);
}

void	sort100(t_all *stack)
{
	int	i;
	int min;

	i = 0;
	while (i < stack->argc)
	{
		min = the_min(stack);
		ft_printf("{%d} {%d} ", the_min(stack), stack->a->data);
		if(min == stack->a->data)
		{
			pb(stack);
			i++;
		}
		else
		{
			ra(stack);
		}
	
	}
	if (stack->b)
		return_2_a(stack);
}
