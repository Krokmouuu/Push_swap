/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:39:53 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/13 16:43:36 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_pa(t_list *a, t_list *b)
{	
	t_list	new_a;
	t_list	new_b;

	if (b->nbr == NULL)
		return (0);
	new_a.nbr = (int *)malloc(sizeof(int) * (a->len + 1));
	if (!new_a.nbr)
		error("Error Malloc");
	new_a.nbr[0] = b->nbr[0];
	new_a.len = a->len + 1;
	new_b.len = b->len - 1;
	new_b.nbr = (int *)malloc(sizeof(int) * (new_b.len));
	newindex(&new_b, &new_a, b, a);
	free(a->nbr);
	free(b->nbr);
	*a = new_a;
	*b = new_b;
	printmove("pa");
	return (0);
}
