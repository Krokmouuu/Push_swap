/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:22:48 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/28 18:10:12 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	position(t_list *a, t_list *new)
{
	int	i;
	int	j;
	int	num;
	int	prev;
	int	index;

	i = 0;
	prev = -2147483648;
	while (i < a->len)
	{
		j = 0;
		num = 2147483647;
		while (j < a->len)
		{
			if (a->nbr[j] < num && a->nbr[j] > prev)
			{
				num = a->nbr[j];
				index = j;
			}
			j++;
		}
		new->nbr[index] = i + 1;
		prev = num;
		i++;
	}
}

t_list	numbers(t_list *a)
{
	t_list	new;

	new.len = a->len;
	new.nbr = (int *)malloc(sizeof(int) * new.len);
	position(a, &new);
	return (new);
}

void	calc(t_list *a, t_list *b, t_list *new)
{
	int		i;
	int		j;

	i = 0;
	while (!sorted(new))
	{
		j = 0;
		while (j < a->len)
		{
			if (((new->nbr[0] >> i) & 1) == 1)
				ft_ra(new, 1);
			else
				ft_pb(new, b);
			j++;
		}
		while (b->len)
			ft_pa(new, b);
		i++;
	}
}

void	infinite(t_list *a, t_list *b)
{
	t_list	new;
	int		bits;

	new = numbers(a);
	bits = 0;
	while (((new.len - 1) >> bits) != 0)
		++bits;
	calc(a, b, &new);
}
