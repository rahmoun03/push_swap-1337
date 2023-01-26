/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 10:47:29 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/26 16:50:08 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort4(t_all *stack)
{
	int	i;
	int	last;
	int	j;

	j = 0;
	last = the_last(stack->a)->data;
	i = 0;
	while (i <= stack->argc * 2)
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
	{
		while (j > 0)
		{
			last = the_last(stack->b)->data;
			if (stack->b->data < last)
				rb(stack);
			last = the_last(stack->b)->data;
			if (stack->b->data < last)
				rb(stack);
			if (j-1 > 0 && stack->b->data < stack->b->next->data)
				sb(stack);
			pa(stack);
			j--;
		}
	}
}