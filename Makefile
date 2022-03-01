# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/05 10:44:01 by bleroy            #+#    #+#              #
#    Updated: 2022/02/26 14:23:26 by bleroy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/push_swap.c \
	   srcs/algo.c \
	   srcs/algo2.c \
	   srcs/algo3.c \
	   srcs/ft_atoi.c \
	   srcs/ft_isdigit.c \
	   srcs/ft_list.c \
	   srcs/parse.c \
	   srcs/ft_split.c \
	   srcs/ft_strlen.c \
	   moves/ft_pb.c \
	   moves/ft_pa.c \
	   moves/ft_ra.c \
	   moves/ft_rb.c \
	   moves/ft_rr.c \
	   moves/ft_rra.c \
	   moves/ft_rrb.c \
	   moves/ft_rrr.c \
	   moves/ft_sa.c \
	   moves/ft_sb.c \
	   moves/ft_ss.c \
	   

OBJS = ${SRCS:.c=.o}

NAME = push_swap

CC = cc

CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address

RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
		$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean :
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re :    fclean all

.PHONY: all clean fclean re