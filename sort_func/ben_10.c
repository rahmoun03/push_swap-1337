/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ben_10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:43:56 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/30 11:55:45 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	the_s_min(t_node *a)
{
	int		key;
	int		s_key;
	t_node	*tmp;

	tmp = a;
	key = the_min(a);
	s_key = tmp->data;
	while (tmp)
	{
		if (tmp->data < s_key && tmp->data > key)
			s_key = tmp->data;
		tmp = tmp->next;
	}
	return (s_key);
}

int	min_3(t_node *a)
{
	int		key;
	int		last;
	t_node	*tmp;

	tmp = a;
	key = the_s_min(a);
	last = tmp->data;
	while (tmp)
	{
		if (tmp->data < last && tmp->data > key)
			last = tmp->data;
		tmp = tmp->next;
	}
	return (last);
}

int	min_4(t_node *a)
{
	int		key;
	int		last;
	t_node	*tmp;

	tmp = a;
	key = min_3(a);
	last = tmp->data;
	while (tmp)
	{
		if (tmp->data < last && tmp->data > key)
			last = tmp->data;
		tmp = tmp->next;
	}
	return (last);
}

int	min_5(t_node *a)
{
	int		key;
	int		last;
	t_node	*tmp;

	tmp = a;
	key = min_4(a);
	last = tmp->data;
	while (tmp)
	{
		if (tmp->data < last && tmp->data > key)
			last = tmp->data;
		tmp = tmp->next;
	}
	return (last);
}
