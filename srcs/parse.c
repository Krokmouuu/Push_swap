/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:10:05 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/16 19:18:02 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	alreadysorted(char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (*argv)
	{
		while (argv[i] < argv[j])
		{
			if (ft_atoi(argv[i]) > ft_atoi(argv[j]))
				return (0);
			i++;
			j++;
		}
		error("");
	}
	return (0);
}

void	duplicate(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				error ("Error");
			j++;
		}
		i++;
	}
}

char	**parsingnoquote(int argc, char **av)
{
	int		i;
	int		c;
	char	**ar;

	i = 1;
	ar = av;
	while (i < argc)
	{
		c = 0;
		while (ar[i][c])
		{
			if (((!nbr(ar[i][c]) && (ar[i][c] != '-' && ar[i][c] != '+'))
			|| (ar[i][c] == '-' && (!nbr(ar[i][c + 1]))) || ((ar[i][c] == '-'
			|| ar[i][c] == '+') && (ar[i][c + 1] == '+'
			|| ar[i][c + 1] == '-'))))
				error("Error");
			c++;
		}
		i++;
	}
	return (ar + 1);
}

char	**parsing(char **argv)
{
	int		i;
	int		c;
	char	**args;

	i = 0;
	args = ft_split(argv[1], ' ');
	while (args[i])
	{
		c = 0;
		while (args[i][c])
		{
			if (((!nbr(args[i][c]) && (args[i][c] != '-' && args[i][c] != '+'))
			|| (args[i][c] == '-' && (!nbr(args[i][c + 1])))
			|| ((args[i][c] == '-'
			|| args[i][c] == '+') && (args[i][c + 1] == '+'
			|| args[i][c + 1] == '-'))))
				error("Error");
			c++;
		}
		i++;
	}
	return (args);
}
