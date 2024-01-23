/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ben_10_v1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:43:53 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/30 11:53:38 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	min_6(t_node *a)
{
	int		key;
	int		last;
	t_node	*tmp;

	tmp = a;
	key = min_5(a);
	last = tmp->data;
	while (tmp)
	{
		if (tmp->data < last && tmp->data > key)
			last = tmp->data;
		tmp = tmp->next;
	}
	return (last);
}

int	min_7(t_node *a)
{
	int		key;
	int		last;
	t_node	*tmp;

	tmp = a;
	key = min_6(a);
	last = tmp->data;
	while (tmp)
	{
		if (tmp->data < last && tmp->data > key)
			last = tmp->data;
		tmp = tmp->next;
	}
	return (last);
}

int	min_8(t_node *a)
{
	int		key;
	int		last;
	t_node	*tmp;

	tmp = a;
	key = min_7(a);
	last = tmp->data;
	while (tmp)
	{
		if (tmp->data < last && tmp->data > key)
			last = tmp->data;
		tmp = tmp->next;
	}
	return (last);
}

int	the_last_min(t_node *a)
{
	int		key;
	int		last;
	t_node	*tmp;

	tmp = a;
	key = min_8(a);
	last = tmp->data;
	while (tmp)
	{
		if (tmp->data < last && tmp->data > key)
			last = tmp->data;
		tmp = tmp->next;
	}
	return (last);
}
