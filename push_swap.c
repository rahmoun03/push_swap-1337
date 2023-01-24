/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:39:36 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/24 00:44:10 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_all *stack)
{
	t_node	*last;
	t_node	*tmp;
	t_node	*head;

	last = stack->a;
	head = stack->a;
	while (last->next != NULL)
	{
		if (last->next->next == NULL)
			tmp = last;
		last = last->next;
	}
	tmp->next = NULL;
	last->next = head;
	stack->a = last;
}

void	rrb(t_all *stack)
{
	t_node	*last;
	t_node	*tmp;
	t_node	*head;

	last = stack->b;
	head = stack->b;
	while (last->next != NULL)
	{
		if (last->next->next == NULL)
			tmp = last;
		last = last->next;
	}
	tmp->next = NULL;
	last->next = head;
	stack->b = last;
}

void	rrr(t_all *stack)
{
	rra(stack);
	rrb(stack);
}