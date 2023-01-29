/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 09:35:59 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/29 11:54:50 by arahmoun         ###   ########.fr       */
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
int min_3(t_node *a)
{
	int key;
	int last;
    t_node *tmp;

    tmp = a;
    key = the_s_min(a);
	last = tmp->data;
    while (tmp)
    {
		if(tmp->data < last && tmp->data > key)
			last = tmp->data;
		tmp = tmp->next;
    }
    return (last);
}

int	the_last_min(t_node *a)
{
    int key;
	int last;
    t_node *tmp;

    tmp = a;
    key = min_3(a);
	last = tmp->data;
    while (tmp)
    {
		if(tmp->data < last && tmp->data > key)
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

int distance(t_node *a, int key)
{
	int dis;
	int i;

	i = 0;
	dis = 0;
	if (position(a, key) > count_node(a) / 2)
		dis = count_node(a) + 1 - position(a, key);
	else 
		dis = position(a, key) - 1;
	return dis;
}

void	sort100(t_all *stack)
{
	while (stack->a)
	{
		// ft_printf("the min :%d ,the S :%d  ,the 3eme :%d ,the last :%d  ", the_min(stack->a), the_s_min(stack->a), min_3(stack->a), the_last_min(stack->a));
		if(distance(stack->a, the_min(stack->a)) < distance(stack->a, the_s_min(stack->a))
			&& distance(stack->a, the_min(stack->a)) < distance(stack->a, min_3(stack->a))
			&& distance(stack->a, the_min(stack->a)) < distance(stack->a, the_last_min(stack->a)))
		{
			if(the_min(stack->a) == stack->a->data)
				pb(stack);
			else if (position(stack->a, the_min(stack->a)) > count_node(stack->a) / 2)
				rra(stack);
			else
				ra(stack);
		}
		else if (distance(stack->a, the_s_min(stack->a)) < distance(stack->a, min_3(stack->a))
			&& distance(stack->a, the_s_min(stack->a)) < distance(stack->a, the_last_min(stack->a)))
		{
			if(the_s_min(stack->a) == stack->a->data)
				pb(stack);
			else if (position(stack->a, the_s_min(stack->a)) > count_node(stack->a) / 2)
				rra(stack);
			else
				ra(stack);
		}
		else if (distance(stack->a, min_3(stack->a)) < distance(stack->a, the_last_min(stack->a)))
		{
			if(min_3(stack->a) == stack->a->data)
				pb(stack);
			else if (position(stack->a, min_3(stack->a)) > count_node(stack->a) / 2)
				rra(stack);
			else
				ra(stack);
		}
		else
		{
			if(the_last_min(stack->a) == stack->a->data)
				pb(stack);
			else if (position(stack->a, the_last_min(stack->a)) > count_node(stack->a) / 2)
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
