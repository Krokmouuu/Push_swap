/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:41:06 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/13 15:17:05 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	newindexrr(t_list *new, t_list *a)
{
	int	i;

	i = 0;
	while (i < a->len - 1)
		i++;
	while (i > 0)
	{
		new->nbr[i] = a->nbr[i - 1];
		i--;
	}
	new->nbr[i] = a->nbr[i];
}

int	ft_rrr(t_list *a, t_list *b)
{
	ft_rra(a, 0);
	ft_rrb(b, 0);
	printmove("rrr");
	return (0);
}
