/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:40:30 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/13 17:01:15 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rrb(t_list *b, int y)
{
	int		tmp;
	t_list	new_b;

	if (b->len < 2)
		return (0);
	else if (b->len == 2)
	{
		ft_sb(b, 0);
		printmove("rrb");
	}
	tmp = b->nbr[b->len - 1];
	new_b.nbr = (int *)malloc(sizeof(int) * b->len);
	if (!new_b.nbr)
		error("Error Malloc");
	new_b.len = b->len;
	newindexrr(&new_b, b);
	new_b.nbr[0] = tmp;
	free (b->nbr);
	*b = new_b;
	if (y == 1)
		printmove("rrb");
	return (0);
}
