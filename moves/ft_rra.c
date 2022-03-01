/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:40:21 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/13 17:01:19 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rra(t_list *a, int y)
{
	int		tmp;
	t_list	new_a;

	if (a->len < 2)
		return (0);
	else if (a->len == 2)
	{
		ft_sa(a, 0);
		printmove("rra");
	}
	tmp = a->nbr[a->len - 1];
	new_a.nbr = (int *)malloc(sizeof(int) * a->len);
	if (!new_a.nbr)
		error("Error Malloc");
	new_a.len = a->len;
	newindexrr(&new_a, a);
	new_a.nbr[0] = tmp;
	free (a->nbr);
	*a = new_a;
	if (y == 1)
		printmove("rra");
	return (0);
}
