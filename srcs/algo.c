/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:41:00 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/26 15:08:34 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sorted(t_list *a)
{
	int	i;

	i = 0;
	while (i < a->len - 1)
	{
		if (a->nbr[i] > a->nbr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	middle_algo(t_list *a, t_list *b)
{	
	int	i;
	int	j;

	while (a->len > 3)
	{
		i = 0;
		j = a->nbr[0];
		while (i < a->len - 1)
		{
			if (a->nbr[i + 1] < j)
				j = a->nbr[i + 1];
			i++;
		}
		while (a->nbr[0] != j)
			ft_ra(a, 1);
		ft_pb(a, b);
	}
	short_algo(a);
	if (a->nbr[0] < a->nbr[1] && a->nbr[1] > a->nbr[2])
		ft_rra(a, 1);
	while (b->len)
		ft_pa(a, b);
}

void	short_algo(t_list *a)
{
	if (a->nbr[0] > a->nbr[1] && a->len == 2)
		ft_sa(a, 1);
	else if (a->nbr[0] > a->nbr[1] && a->nbr[1] > a->nbr[2])
	{
		ft_sa(a, 1);
		ft_rra(a, 1);
	}
	else if (a->nbr[0] < a->nbr[1] && a->nbr[1] < a->nbr[2])
		ft_ra(a, 1);
	else if (a->nbr[0] > a->nbr[1] && a->nbr[1] > a->nbr[2])
		ft_sa(a, 1);
	else if (a->nbr[0] < a->nbr[1] && a->nbr[1] > a->nbr[2])
	{
		ft_rra(a, 1);
		if (a->nbr[0] > a->nbr[1] && a->nbr[1] < a->nbr[2])
			ft_sa(a, 1);
	}
	else if (a->nbr[0] > a->nbr[1] && a->nbr[0] > a->nbr[2])
		ft_ra(a, 1);
	else if (a->nbr[0] > a->nbr[1] && a->nbr[1] < a->nbr[2])
		ft_sa(a, 1);
	if (sorted(a) == 0)
		return ;
}

void	algo(t_list *a, t_list *b)
{
	if (a->len <= 3)
		short_algo(a);
	else if (a->len <= 5)
		middle_algo(a, b);
	else if (a->len <= 50)
		big_algo(a, b);
	else
		infinite(a, b);
}
