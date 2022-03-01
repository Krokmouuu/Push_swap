/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:39:51 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/13 16:43:58 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_pb(t_list *a, t_list *b)
{
	t_list	new_a;
	t_list	new_b;

	if (a->nbr == NULL)
		return (0);
	new_b.nbr = (int *)malloc(sizeof(int) * (b->len + 1));
	if (!new_b.nbr)
		error("Error Malloc");
	new_b.nbr[0] = a->nbr[0];
	new_b.len = b->len + 1;
	new_a.len = a->len - 1;
	new_a.nbr = (int *)malloc(sizeof(int) * (new_a.len));
	newindex(&new_a, &new_b, a, b);
	free(a->nbr);
	free(b->nbr);
	*a = new_a;
	*b = new_b;
	printmove("pb");
	return (0);
}
