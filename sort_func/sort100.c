/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:35:59 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/27 10:42:06 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	return_2_a(int j, t_all *stack)
{
	int	last;

	last = 0;
	while (j > 0)
	{
		last = the_last(stack->b)->data;
		if (stack->b->data < last)
			rrb(stack);
        if (j > 1 && stack->b->data <  stack->b->next->data)
            sb(stack);
		else
		{
			pa(stack);
			if (stack->a->data > stack->a->next->data)
				sa(stack);
			j--;
		}
	}
}

void	sort100(t_all *stack)
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
			ra(stack);
        else if((stack->a->data != last) && (stack->a->data > stack->a->next->data))
            sa(stack);
		else if (stack->a->data < last)
		{
			pb(stack);
			j++;
            if (j > 1 && stack->b->data < stack->b->next->data)
				sb(stack);
            if (j > 1 && stack->b->data < the_last(stack->b)->data)
                rrb(stack);
		}
		i++;
	}
	if (stack->b)
		return_2_a(j, stack);
}
