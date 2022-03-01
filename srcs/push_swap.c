/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:41:42 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/26 14:59:18 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	printmove(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	error(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	exit (0);
}

int	main(int argc, char **argv)
{	
	char	**args;

	if (argc == 2)
		args = parsing(argv);
	if (argc > 2)
		args = parsingnoquote(argc, argv);
	if (argc == 1)
		return (0);
	duplicate(args);
	alreadysorted(args);
	startlist(args);
	return (0);
}
