/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 04:23:32 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/24 00:44:06 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_all *stack)
{
	int	nb;

	nb = stack->a->data;
	stack->a->data = stack->a->next->data;
	stack->a->next->data = nb;
}

void	sb(t_all *stack)
{
	int	nb;

	nb = stack->b->data;
	stack->b->data = stack->b->next->data;
	stack->b->next->data = nb;
}

void	ss(t_all *stack)
{
	sa(stack);
	sb(stack);
}

void	pa(t_all *stack)
{
	t_node	*c;

	c = stack->b->next;
	ft_lstadd_front(&stack->a, ft_lstnew(stack->b->data));
	free(stack->b);
	stack->b = c;
}

void	pb(t_all *stack)
{
	t_node	*c;

	c = stack->a->next;
	ft_lstadd_front(&stack->b, ft_lstnew(stack->a->data));
	free(stack->a);
	stack->a = c;
}
