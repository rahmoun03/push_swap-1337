/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:35:59 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/30 12:05:15 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	position(t_node *a, int key)
{
	int		i;
	t_node	*tmp;

	i = 1;
	tmp = a;
	while (tmp->data != key)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	count_node(t_node *a)
{
	int		i;
	t_node	*tmp;

	tmp = a;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	the_min(t_node *a)
{
	int		key;
	t_node	*tmp;

	tmp = a;
	key = tmp->data;
	while (tmp)
	{
		if (tmp->data < key)
			key = tmp->data;
		tmp = tmp->next;
	}
	return (key);
}

int	the_big(t_node *a)
{
	int		key;
	t_node	*tmp;

	tmp = a;
	key = tmp->data;
	while (tmp)
	{
		if (tmp->data >= key)
			key = tmp->data;
		tmp = tmp->next;
	}
	return (key);
}

void	sort100(t_all *stack)
{
	int	nbr;

	while (stack->a)
	{
		nbr = the_closest(stack, the_closest_1(stack->a),
				the_closest_2(stack->a));
		if (nbr == stack->a->data)
			pb(stack);
		else if (position(stack->a, nbr) > count_node(stack->a) / 2)
			rra(stack);
		else
			ra(stack);
	}
	while (stack->b)
	{
		if (the_big(stack->b) == stack->b->data)
			pa(stack);
		else if (stack->b->next && stack->b->next->data == the_big(stack->b))
			sb(stack);
		else if (position(stack->b, the_big(stack->b)) > count_node(stack->b)
			/ 2)
			rrb(stack);
		else
			rb(stack);
	}
}
