/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:35:59 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/29 07:58:56 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int position(t_node *a, int key)
{
    int i;
    t_node *tmp;

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
	int i;
	t_node *tmp;

	tmp = a;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int	the_s_min(t_node *a)
{
    int key;
	int s_key;
    t_node *tmp;

    tmp = a;
    key = tmp->data;
	s_key = key;
    while (tmp)
    {
        if(tmp->data < key)
		{
			s_key = key;
            key = tmp->data;
			tmp = a;
		}
		if(tmp->data < s_key && tmp->data != key)
			s_key = tmp->data;
		tmp = tmp->next;
    }
    return (s_key);
}

int	the_last_min(t_node *a)
{
    int key;
	int s_key;
	int last;
    t_node *tmp;

    tmp = a;
    key = tmp->data;
	s_key = key;
	last = s_key;
    while (tmp)
    {
        if(tmp->data < key)
		{
			s_key = key;
            key = tmp->data;
		}
		if(tmp->data < s_key && tmp->data != key)
		{
			last = s_key;
			s_key = tmp->data;
		}
		if(tmp->data < last && tmp->data != key && tmp->data != s_key)
			last = tmp->data;
		tmp = tmp->next;
    }
    return (last);
}

int the_min(t_node *a)
{
    int key;
    t_node *tmp;

    tmp = a;
    key = tmp->data;
    while (tmp)
    {
        if(tmp->data < key)
            key = tmp->data;
		tmp = tmp->next;
    }
    return (key);
}

int the_big(t_node *a)
{
    int key;
    t_node *tmp;

    tmp = a;
    key = tmp->data;
    while (tmp)
    {
        if(tmp->data >= key)
            key = tmp->data;
		tmp = tmp->next;
    }
    return (key);
}

void	sort100(t_all *stack)
{
	int p_s_min;
	int p_min;
	int p_last_min;
	
	while (stack->a)
	{
		p_last_min = position(stack->a, the_last_min(stack->a));
		p_s_min = position(stack->a, the_s_min(stack->a));
		p_min = position(stack->a, the_min(stack->a));

		if(p_s_min - count_node(stack->a) > p_min - count_node(stack->a))
		{
			if(the_min(stack->a) == stack->a->data)
				pb(stack);
			else if (p_min > count_node(stack->a) / 2)
				rra(stack);
			else
				ra(stack);
		}
		else
		{
			if(the_s_min(stack->a) == stack->a->data)
				pb(stack);
			else if (p_s_min > count_node(stack->a) / 2)
				rra(stack);
			else
				ra(stack);
		}
	}
	while (stack->b)
	{
		if(the_big(stack->b) == stack->b->data)
			pa(stack);
		else if (position(stack->b, the_big(stack->b)) > count_node(stack->b) / 2)
			rrb(stack);
		else
			rb(stack);
	}
}































void	sort_100(t_all *stack)
{
	int i;

	i = 0;
	int p_min;
	
	while (stack->a->next)
	{
		p_min = position(stack->a, the_min(stack->a));
		if(the_min(stack->a) == stack->a->data)
			pb(stack);
		else if (p_min > count_node(stack->a) / 2)
			rra(stack);
		else
			ra(stack);
	}
	if (stack->b)
	{
		while (stack->b)
		{
			pa(stack);
		}

	}
}
