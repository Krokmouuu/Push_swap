/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:13:06 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/16 16:30:28 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	newindex(t_list *new_a, t_list *new_b, t_list *a, t_list *b)
{
	int	i;

	i = 0;
	while (i < new_a->len)
	{
		new_a->nbr[i] = a->nbr[i + 1];
		i++;
	}
	i = 1;
	while (i < new_b->len)
	{
		new_b->nbr[i] = b->nbr[i - 1];
		i++;
	}
}

void	inita(char **args, t_list *a)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (args[i])
	{
		l++;
		i++;
	}
	a->len = l;
	a->nbr = (int *)malloc(sizeof(int) * (a->len));
	if (!a->nbr)
		error("Error Malloc");
	i = 0;
	while (args[i])
	{
		a->nbr[i] = ft_atoi(args[i]);
		i++;
	}
}

void	initb(t_list *b)
{
	b->len = 0;
	b->nbr = NULL;
}

void	startlist(char **args)
{
	t_list	a;
	t_list	b;

	inita(args, &a);
	initb(&b);
	algo(&a, &b);
	free(a.nbr);
	free(b.nbr);
}
