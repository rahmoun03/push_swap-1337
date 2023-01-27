/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:36:41 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/27 09:59:42 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	return_to_a(int j, t_all *stack)
{
	int	last;

	last = 0;
	while (j > 0)
	{
		last = the_last(stack->b)->data;
		if (stack->b->data < last)
			rrb(stack);
		else
		{
			pa(stack);
			if (stack->a->data > stack->a->next->data)
				sa(stack);
			j--;
		}
	}
}

void	sort4_5(t_all *stack)
{
	int	i;
	int	last;
	int	j;

	j = 0;
	last = the_last(stack->a)->data;
	i = 0;
	while (i < stack->argc * 2)
	{
		last = the_last(stack->a)->data;
		if (stack->a->data > last)
			rra(stack);
		else if (stack->a->data < last)
		{
			pb(stack);
			j++;
		}
		i++;
	}
	if (stack->b)
		return_to_a(j, stack);
}
