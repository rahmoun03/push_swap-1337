/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4_5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 11:36:41 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/30 11:41:59 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort4_5(t_all *stack)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (j < 3)
	{
		if (the_min(stack->a) == stack->a->data)
		{
			pb(stack);
			j++;
		}
		else if (position(stack->a, the_min(stack->a)) <= 3)
			ra(stack);
		else
			rra(stack);
	}
	if (count_node(stack->a) >= 2 && stack->a->data > stack->a->next->data)
		sa(stack);
	while (stack->b)
		pa(stack);
}
