/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:43:00 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/24 00:44:01 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_all *stack)
{
	t_node	*last;
	t_node	*head;
	t_node	*new_head;

	last = stack->a;
	head = stack->a;
	new_head = stack->a->next;
	while (last->next != NULL)
		last = last->next;
	last->next = head;
	head->next = NULL;
	stack->a = new_head;
}

void	rb(t_all *stack)
{
	t_node	*last;
	t_node	*head;
	t_node	*new_head;

	last = stack->b;
	head = stack->b;
	new_head = stack->b->next;
	while (last->next != NULL)
		last = last->next;
	last->next = head;
	head->next = NULL;
	stack->b = new_head;
}

void	rr(t_all *stack)
{
	ra(stack);
	rb(stack);
}
