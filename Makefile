# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahansal <mahansal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 18:04:23 by mahansal          #+#    #+#              #
#    Updated: 2023/02/11 20:43:29 by mahansal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc

NAME 	= push_swap

BNAME 	= checker

SRCS 	= push_swap.c operations.c operations2.c init.c \
				check.c \
				sort_fn.c sort_helpers.c \
				ft_atoi.c ft_split.c ft_strjoin.c \
				utils.c utils2.c \

BSRCS 	= checker.c

OBJS 	= $(SRCS:.c=.o)

BOBJS 	= $(BSRCS:.c=.o)

CFLAGS 	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

bonus: $(BOBJS)
	$(CC) $(CFLAGS) $(BOBJS) -o $(BNAME)
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all