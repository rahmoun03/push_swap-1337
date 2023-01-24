/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 04:23:34 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/24 10:57:15 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf/ft_printf.h"
# include <stdlib.h>
# define RED "\033[7m\033[31m"
# define DEFFAULT "\033[0m"
# define GREEN "\033[7m\033[32m"
# define YOLLOW "\033[7m\033[33m"

typedef struct s_join
{
	int				len;
	int				i;
	int				j;
	char			*re;
}					t_join;

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}					t_node;

typedef struct s_all
{
	char			*numbers;
	char			**argv;
	t_node			*a;
	t_node			*b;
}					t_all;

void				ft_error(void);
int					ft_atoi(const char *str);
void				ft_duble_int(char **av);
void				ft_is_digit(char **av);
char				*ft_strjoin(char *s1, char *s2);
char				**ft_split(char *s, char c);
// linked list
void				ft_lstadd_back(t_node **lst, t_node *new_);
void				ft_lstadd_front(t_node **lst, t_node *new_);
t_node				*ft_lstnew(int data);

// rules
void				sa(t_all *stack);
void				sb(t_all *stack);
void				ss(t_all *stack);
void				pa(t_all *stack);
void				pb(t_all *stack);
void				rra(t_all *stack);
void				rrb(t_all *stack);
void				rrr(t_all *stack);
void				ra(t_all *stack);
void				rb(t_all *stack);
void				rr(t_all *stack);

#endif