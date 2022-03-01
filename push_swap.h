/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:40:05 by bleroy            #+#    #+#             */
/*   Updated: 2022/02/26 15:01:18 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct s_list
{
	int	*nbr;
	int	len;
}	t_list;

void	position(t_list *a, t_list *new);
t_list	numbers(t_list *a);
void	calc(t_list *a, t_list *b, t_list *new);
void	infinite(t_list *a, t_list *b);

void	median(t_list *a, int j, int i);
void	big_algo(t_list *a, t_list *b);

int		sorted(t_list *a);
void	middle_algo(t_list *a, t_list *b);
void	short_algo(t_list *a);
void	algo(t_list *a, t_list *b);

int		alreadysorted(char **argv);
void	duplicate(char **argv);
char	**parsingnoquote(int argc, char **av);
char	**parsing(char **argv);

void	newindexrr(t_list *new, t_list *a);
void	newindexr(t_list *new, t_list *a);
void	newindex(t_list *new_a, t_list *new_b, t_list *a, t_list *b);
void	inita(char **args, t_list *a);
void	initb(t_list *b);
void	startlist(char **args);

void	printmove(char *s);
void	error(char *s);

char	**ft_split(char const *s, char c);
size_t	ft_strlen(const	char *str);
int		ft_atoi(const char *str);
int		nbr(int c);

int		ft_pa(t_list *a, t_list *b);
int		ft_pb(t_list *a, t_list *b);
int		ft_ra(t_list *a, int y);
int		ft_rb(t_list *b, int y);
int		ft_rr(t_list *a, t_list *b);
int		ft_rra(t_list *a, int y);
int		ft_rrb(t_list *a, int y);
int		ft_rrr(t_list *a, t_list *b);
int		ft_sa(t_list *a, int y);
int		ft_sb(t_list *b, int y);
int		ft_ss(t_list *a, t_list *b);

#endif