/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 08:58:24 by arahmoun          #+#    #+#             */
/*   Updated: 2023/01/24 10:57:34 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strjoin(char *s1, char *s2)
{
	t_join	v;

	v.i = 0;
	if (!s1)
		v.len = ft_strlen(s2) + 1;
	else
		v.len = ft_strlen(s1) + ft_strlen(s2) + 1;
	v.re = (char *)malloc(v.len + 1);
	if (!v.re)
		return (NULL);
	if (s1)
	{
		while (v.i <= v.len && s1[v.i])
		{
			v.re[v.i] = s1[v.i];
			v.i++;
		}
		free(s1);
	}
	v.j = 0;
	v.re[v.i++] = ' ';
	while (s2[v.j])
		v.re[v.i++] = s2[v.j++];
	v.re[v.i] = '\0';
	return (v.re);
}
