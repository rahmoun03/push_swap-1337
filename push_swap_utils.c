/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 04:23:32 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/26 10:23:52 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_all *stack)
{
	int	nb;

	nb = stack->a->data;
	stack->a->data = stack->a->next->data;
	stack->a->next->data = nb;
	write(1, "sa\n", 3);
}

void	sb(t_all *stack)
{
	int	nb;

	nb = stack->b->data;
	stack->b->data = stack->b->next->data;
	stack->b->next->data = nb;
	write(1, "sb\n", 3);
}

void	ss(t_all *stack)
{
	sa(stack);
	sb(stack);
	write(1, "ss\n", 3);
}

void	pa(t_all *stack)
{
	t_node	*c;

	c = stack->b->next;
	ft_lstadd_front(&stack->a, ft_lstnew(stack->b->data));
	free(stack->b);
	stack->b = c;
	write(1, "pa\n", 3);
}

void	pb(t_all *stack)
{
	t_node	*c;

	c = stack->a->next;
	ft_lstadd_front(&stack->b, ft_lstnew(stack->a->data));
	free(stack->a);
	stack->a = c;
	write(1, "pb\n", 3);
}
