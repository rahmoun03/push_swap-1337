/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 16:50:43 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/27 08:38:48 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_if_sort(t_node *a)
{
	t_node	*tmp;
	t_node	*ttmp;
	int		i;

	i = 0;
	tmp = a;
	while (tmp->next != NULL)
	{
		ttmp = tmp->next;
		while (ttmp != NULL)
		{
			if (tmp->data > ttmp->data)
				return ;
			ttmp = ttmp->next;
		}
		tmp = tmp->next;
	}
	exit(1);
}
