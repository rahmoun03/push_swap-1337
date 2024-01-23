/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_closest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:48:51 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/30 11:52:24 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	distance(t_node *a, int key)
{
	int	dis;
	int	i;

	i = 0;
	dis = 0;
	if (position(a, key) > count_node(a) / 2)
		dis = count_node(a) + 1 - position(a, key);
	else
		dis = position(a, key) - 1;
	return (dis);
}

int	the_closest_1(t_node *a)
{
	if (distance(a, the_min(a)) < distance(a, the_s_min(a))
		&& distance(a, the_min(a)) < distance(a, min_3(a))
		&& distance(a, the_min(a)) < distance(a, min_4(a))
		&& distance(a, the_min(a)) < distance(a, min_5(a))
		&& distance(a, the_min(a)) < distance(a, min_6(a)))
		return (the_min(a));
	else if (distance(a, the_s_min(a)) < distance(a, min_3(a))
		&& distance(a, the_s_min(a)) < distance(a, min_4(a))
		&& distance(a, the_s_min(a)) < distance(a, min_5(a))
		&& distance(a, the_s_min(a)) < distance(a, min_6(a)))
		return (the_s_min(a));
	else if (distance(a, min_3(a)) < distance(a, min_4(a))
		&& distance(a, min_3(a)) < distance(a, min_5(a))
		&& distance(a, min_3(a)) < distance(a, min_6(a)))
		return (min_3(a));
	else if (distance(a, min_4(a)) < distance(a, min_5(a))
		&& distance(a, min_4(a)) < distance(a, min_6(a)))
		return (min_4(a));
	else if (distance(a, min_5(a)) < distance(a, min_6(a)))
		return (min_5(a));
	return (min_6(a));
}

int	the_closest_2(t_node *a)
{
	if (distance(a, min_7(a)) < distance(a, min_8(a))
		&& distance(a, min_7(a)) < distance(a, the_last_min(a)))
		return (min_7(a));
	else if (distance(a, min_8(a)) < distance(a, the_last_min(a)))
		return (min_8(a));
	return (the_last_min(a));
}

int	the_closest(t_all *stack, int n1, int n2)
{
	if (distance(stack->a, n1) < distance(stack->a, n2))
		return (n1);
	return (n2);
}
