/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:48:40 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/27 08:35:33 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort2_3(t_all *stack)
{
	int	nb;

	if (stack->argc == 2)
	{
		if (stack->a->data > stack->a->next->data)
			sa(stack);
	}
	else if (stack->argc == 3)
	{
		nb = the_last(stack->a)->data;
		if (stack->a->data > nb)
			ra(stack);
		nb = the_last(stack->a)->data;
		if (stack->a->data > nb)
			ra(stack);
		if (stack->a->data > stack->a->next->data)
			sa(stack);
	}
}
