/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:40:05 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/13 15:01:28 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	newindexr(t_list *new, t_list *a)
{
	int	i;

	i = 0;
	while (i < a->len - 1)
	{
		new->nbr[i] = a->nbr[i + 1];
		i++;
	}
	new->nbr[i] = a->nbr[i];
}

int	ft_rr(t_list *a, t_list *b)
{
	ft_ra(a, 0);
	ft_rb(b, 0);
	printmove("rr");
	return (0);
}
