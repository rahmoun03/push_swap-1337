/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:37:26 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/24 00:37:27 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(t_node **lst, t_node *new_)
{
	t_node	*tmp;

	if (!lst)
	{
		*lst = new_;
		return ;
	}
	tmp = *lst;
	*lst = new_;
	new_->next = tmp;
}

t_node	*ft_lstnew(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	ft_lstadd_back(t_node **lst, t_node *new_)
{
	t_node	*tmp;

	if (!*lst)
	{
		(*lst) = new_;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_;
}
