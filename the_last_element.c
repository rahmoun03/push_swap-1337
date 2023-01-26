/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_last_element.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:47:01 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/26 09:49:39 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node  *the_last(t_node *node)
{
    t_node *tmp;

    tmp = node;
    while (tmp->next != NULL)
        tmp = tmp->next;
    return (tmp);
}