/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:39:49 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/13 16:43:54 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_ra(t_list *a, int y)
{
	int		tmpl;
	t_list	new_a;

	if (a->len < 2)
		return (0);
	else if (a->len == 2)
	{
		ft_sa(a, 0);
		printmove("ra");
	}
	new_a.nbr = (int *)malloc(sizeof(int) * a->len + 1);
	if (!new_a.nbr)
		error("Error Malloc");
	new_a.len = a->len;
	tmpl = a->nbr[0];
	newindexr(&new_a, a);
	new_a.nbr[a->len - 1] = tmpl;
	free(a->nbr);
	*a = new_a;
	if (y == 1)
		printmove("ra");
	return (0);
}
