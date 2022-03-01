/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:39:47 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/13 16:44:29 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_rb(t_list *b, int y)
{
	int		tmpl;
	t_list	new_b;

	if (b->len < 2)
		return (0);
	else if (b->len == 2)
	{
		ft_sb(b, 0);
		printmove("rb");
	}
	new_b.nbr = (int *)malloc(sizeof(int) * b->len + 1);
	new_b.len = b->len;
	if (!new_b.nbr)
		error("Error Malloc");
	tmpl = b->nbr[0];
	newindexr(&new_b, b);
	new_b.nbr[b->len - 1] = tmpl;
	free(b->nbr);
	*b = new_b;
	if (y == 1)
		printmove("rb");
	return (0);
}
