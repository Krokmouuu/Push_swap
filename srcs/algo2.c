/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:24:30 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/26 14:23:13 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	median(t_list *a, int j, int i)
{
	while (a->nbr[0] != j)
	{
		if (i < a->len / 2)
			ft_ra(a, 1);
		else
			ft_rra(a, 1);
	}
}

void	big_algo(t_list *a, t_list *b)
{
	int	i;
	int	j;
	int	opti;

	while (a->len > 5)
	{
		i = -1;
		j = a->nbr[0];
		while (++i < a->len - 1)
		{
			if (a->nbr[i + 1] < j)
			{
				j = a->nbr[i + 1];
				opti = i;
			}
		}
		median(a, j, opti);
		ft_pb(a, b);
	}
	middle_algo(a, b);
	while (b->len > 0)
		ft_pa(a, b);
}
